#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "rechner.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Rechner *rechner;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_multiplication_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_right_bracket_clicked();

    void on_pushButton_left_bracket_clicked();

    void on_pushButton_pi_clicked();

    void on_radioButton_bin_clicked();

    void on_radioButton_oct_clicked();

    void on_radioButton_dec_clicked();

    void on_radioButton_hex_clicked();

    void on_pushButton_A_clicked();

    void on_pushButton_B_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_D_clicked();

    void on_pushButton_E_clicked();

    void on_pushButton_F_clicked();

    void on_radioButton_dec_toggled(bool checked);

    void on_radioButton_oct_toggled(bool checked);

    void on_radioButton_hex_toggled(bool checked);

    void on_radioButton_bin_toggled(bool checked);

    void on_pushButton_vorzeichen_wechsel_clicked();

    void on_pushButton_e_clicked();

    void on_pushButton_hoch_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
