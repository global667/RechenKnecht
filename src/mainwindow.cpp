#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    rechner = new Rechner();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete rechner;
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void MainWindow::on_pushButton_plus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "+");
}



void MainWindow::on_pushButton_equal_clicked()
{
   QString term_as_str = ui->lineEdit->text();
   int base = 10;
   if (ui->radioButton_bin->isChecked()) base = 2;
   if (ui->radioButton_oct->isChecked()) base = 8;
   if (ui->radioButton_dec->isChecked()) base = 10;
   if (ui->radioButton_hex->isChecked()) base = 16;
   ui->lineEdit->setText(rechner->calc(term_as_str, base));
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void MainWindow::on_pushButton_8_clicked()
{
        ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}

void MainWindow::on_pushButton_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void MainWindow::on_pushButton_minus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "-");
}

void MainWindow::on_pushButton_multiplication_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "*");
}

void MainWindow::on_pushButton_division_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "/");
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setFocus();
}

void MainWindow::on_pushButton_right_bracket_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ")");
}

void MainWindow::on_pushButton_left_bracket_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "(");
}

void MainWindow::on_pushButton_pi_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3.1415");
}

void MainWindow::on_radioButton_bin_clicked()
{
    ui->pushButton_0->setEnabled(true);
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_A->setEnabled(false);
    ui->pushButton_B->setEnabled(false);
    ui->pushButton_C->setEnabled(false);
    ui->pushButton_D->setEnabled(false);
    ui->pushButton_E->setEnabled(false);
    ui->pushButton_F->setEnabled(false);
}

void MainWindow::on_radioButton_oct_clicked()
{
    ui->pushButton_0->setEnabled(true);
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_A->setEnabled(false);
    ui->pushButton_B->setEnabled(false);
    ui->pushButton_C->setEnabled(false);
    ui->pushButton_D->setEnabled(false);
    ui->pushButton_E->setEnabled(false);
    ui->pushButton_F->setEnabled(false);
}

void MainWindow::on_radioButton_dec_clicked()
{
    ui->pushButton_0->setEnabled(true);
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_A->setEnabled(false);
    ui->pushButton_B->setEnabled(false);
    ui->pushButton_C->setEnabled(false);
    ui->pushButton_D->setEnabled(false);
    ui->pushButton_E->setEnabled(false);
    ui->pushButton_F->setEnabled(false);
}

void MainWindow::on_radioButton_hex_clicked()
{
    ui->pushButton_0->setEnabled(true);
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_A->setEnabled(true);
    ui->pushButton_B->setEnabled(true);
    ui->pushButton_C->setEnabled(true);
    ui->pushButton_D->setEnabled(true);
    ui->pushButton_E->setEnabled(true);
    ui->pushButton_F->setEnabled(true);
}

void MainWindow::on_pushButton_A_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "A");
}



void MainWindow::on_pushButton_B_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "B");
}

void MainWindow::on_pushButton_C_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "C");
}

void MainWindow::on_pushButton_D_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "D");
}

void MainWindow::on_pushButton_E_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "E");
}

void MainWindow::on_pushButton_F_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "F");
}

void MainWindow::on_radioButton_dec_toggled(bool checked)
{
    if(checked) {
        ui->lineEdit->setText("");
    }
}

void MainWindow::on_radioButton_oct_toggled(bool checked)
{
    if(checked) {
        ui->lineEdit->setText("");
    }
}

void MainWindow::on_radioButton_hex_toggled(bool checked)
{
    if(checked) {
        ui->lineEdit->setText("");
    }
}

void MainWindow::on_radioButton_bin_toggled(bool checked)
{
    if(checked) {
        ui->lineEdit->setText("");
    }
}

void MainWindow::on_pushButton_vorzeichen_wechsel_clicked()
{

}

void MainWindow::on_pushButton_e_clicked()
{

}

void MainWindow::on_pushButton_hoch_clicked()
{

}

