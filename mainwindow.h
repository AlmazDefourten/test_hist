#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTime>
#include <QMainWindow>
#include <ctime>
#include <qlabel.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <random>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void _return(int i);
    void PeremeshivanieMassiva();


    void on_restart_clicked();
    void ren();


    void on_testOd_clicked();

    void on_TestD_clicked();

    void on_TestT_clicked();

    void on_TestC_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
};
void randSort(int *m, int size);
#endif // MAINWINDOW_H
