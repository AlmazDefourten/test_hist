#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}
int chetVer, chetNever = 0;
   int xc[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
void MainWindow::PeremeshivanieMassiva() {
    srand(time(NULL));
    const int size = 10;

    randSort(xc, size);


}

int p = 0;
MainWindow::~MainWindow()
{
    delete ui;
}
QString otvet, an;

void ren()
{





}
void MainWindow::_return()
{

    int a = xc[p];

    switch(a)
{
    case 0:
    {
        ui->label->setText("Полтавская Битва");
        otvet = "27 июня 1709";
        break;
    }
case 1:
{
        ui->label->setText("Русь принимает христианство, как государственную религию");
        otvet = "988";
        break;
        }
    case 2:
    {
        ui->label->setText("Разделение христианской церкви на католическую и православную");
        otvet = "1054";
        break;
    }
    case 3:
    {
        ui->label->setText("Ледовое побоище(Александр Невский)");
        otvet = "1242";
        break;
    }
    case 4:
    {
        ui->label->setText("Куликовская битва(Дмитрий Донской)");
        otvet = "8 сентября 1380";
        break;
    }
    case 5:
    {
        ui->label->setText("Великое стояние на реке Угре (Иван III)");
        otvet = "1480";
        break;
    }
    case 6:
    {
        ui->label->setText("Открытие Америки Христофором Колумбом");
        otvet = "1492";
break;
    }
    case 7:
    {
        ui->label->setText("Иван 4 (Грозный) объявляется себя царем(Опричнина)");
        otvet = "1547";
        break;
    }
    case 8:
    {
        ui->label->setText("Присоединение Казанского ханства к России (взятие Казани)");
        otvet = "1552";
        break;
    }
    case 9:
    {
        ui->label->setText("Освобождение Москвы от польских интервентов, в результате ополчения(первый Романов -Михаил Романов)");
        otvet = "26 октября 1612";
        break;
    }
    case 10:
    {
        ui->label->setText("Северная война");
        otvet = "1700-1721";
        break;
    }
    default:
        ui->label->setText("nu");
   }

}
bool mm = 0;
void MainWindow::on_pushButton_clicked()
{
p++;
    if (p == 11)
    {
        p = 0;
    }

   if (mm == 0)
   {
    ren();
    mm = 1;
   }
    // вектор из десяти элементов
   // перемешиваеаем
       an = ui->lineEdit->text();




    if (an == otvet)
    {
    ui->dr->setStyleSheet("color: rgb(125, 255, 39)");
   ui->dr->setText("Правильно!");
    chetVer++;
    ui->ver->setNum(chetVer);
    }
    else
    {
        ui->dr->setStyleSheet("color: rgb(255, 62, 28)");
        ui->dr->setText("Неправильно!");
        chetNever++;
        ui->nev->setNum(chetNever);
    }
    _return();
}


void MainWindow::on_restart_clicked()
{

    PeremeshivanieMassiva();
    chetVer = 0;
    ui->ver->setNum(chetVer);
    chetNever = 0;
    ui->nev->setNum(chetNever);

}

void MainWindow::on_ver_linkActivated(const QString &link)
{

}
