#include "rechner.h"
#include <QDebug>
#include <QtMath>

Rechner::Rechner(QObject *parent) : QObject(parent)
{
    base = 10;
    term = "\n";
    position = 0;
}

Q_INVOKABLE void Rechner::getNumber(const QString &symbol)
    // TODO: In getSymbol umbenennen
{
    qDebug() << "getNumber: " << symbol;
    if (symbol.compare("=") == 0)
    {
        setSolution(calc(m_solution));
        return;
    } else if (symbol.compare("clr") == 0)
    {
        setSolution("");
        return;
    }
    setSolution(m_solution += symbol);
}

long Rechner::zahl(QChar& c)
{
    long z{ 0 };
    long z2{ 0 };
    // isdigit() ist eine Funktion (genauer: ein Makro), das zu true ausgewertet wird,
    // falls c ein Ziffernzeichen ist. Die Verwendung setzt #include <cctype> voraus.
    while (c.isDigit() || (c >= 'A' && c <= 'F' ) ||(c >= 'a' && c <= 'f' ) || c == '.') { // d.h. c >= '0' && c <= '9'

        // Zur Subtraktion von '0' siehe Seite 57.
        // ADDED! in Dezimal umwandeln
        if (c.isDigit()|| (c >= 'A' && c <= 'F' ) ||(c >= 'a' && c <= 'f' )) {
            switch (base)
            {
            case 2:
                z = 2L * z + long(c.toLatin1() - '0'); // implizite Typumwandlung
                c = term.at(position++);
                break;
            case 8:
                z = 8L * z + long(c.toLatin1() - '0'); // implizite Typumwandlung
                c = term.at(position++);
                break;
            case 10:
                z = 10L * z + long(c.toLatin1() - '0'); // implizite Typumwandlung
                c = term.at(position++);
                break;
            case 16:
                // TODO: A..F umwandeln
                z = 16L * z + long(c.toLatin1() - '0'); // implizite Typumwandlung
                c = term.at(position++);
                break;
            }
        }
        else if (c == '.') { //ADDED!
            c = term.at(position++);
            while (c.isDigit()) {
                z2 = z2 + 1.0/10.0 * long(c.toLatin1()- '0');
                c = term.at(position++);
            }
            return z + z2;
        }
    }
    return z;// + z2;
}

long Rechner::faktor(QChar& c)
{
    long f{ 0 };
    if (c == '(') {
        c = term.at(position++); // ( überspringen
        f = ausdruck(c);
        if (c != ')'){
            //std::cerr << "Rechte Klammer fehlt!\n"; //*** s.u.
        }
        else
            c = term.at(position++); // ) überspringen
    }
    else if (c == '-') { //ADDED!
        c = term.at(position++); // - überspringen
        f = -zahl(c);
    } else {
        f = zahl(c);
    }
    return f;
}

long Rechner::summand(QChar& c)
{
    long s{ faktor(c) };
    if (c == '*' || c == '/') {
        if (c == '*') {
            c = term.at(position++); // * überspringen
            s *= faktor(c);
        }
        else {
            c = term.at(position++); // / überspringen
            try {
                s =  div (faktor(c), s).quot; // TODO: write an "divide by zero" excpetion
            } catch (std::exception e) {
                qDebug() << e.what();
                return s;
            }

        }
    }
    return s;
}

long Rechner::ausdruck(QChar& c) // Übergabe per Referenz!
{
    long a{ 0 }; // Hilfsvariable für Ausdruck
    if (c == '-') {
        c = term.at(position++); // - im Eingabestrom überspringen
        a = -summand(c); // Rest an summand() übergeben
    }
    else {
        if (c == '+')
            c = term.at(position++); // + überspringen
        a = summand(c);
    }
    if (c == '+' || c == '-') {
        if (c == '+') {
            c = term.at(position++); // + überspringen
            a += summand(c);
        }
        else {
            c = term.at(position++); // - überspringen
            a -= summand(c);
        }
    }
    return a;
}

QString Rechner::calc(QString term_as_str, int base) {
    QChar c;
    long result_as_int;
    QString result_as_str;
    position = 0;
    this->base = base;
    this->term = term_as_str + "\n";
    c = term.at(position++);
    result_as_int = ausdruck(c);
    return QString("%1").arg(result_as_int, 0, base);
}




