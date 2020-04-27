#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}
int chetPlus = 0, chetMinus = 0;
int chetVer;
   int xc[54] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53};
void MainWindow::PeremeshivanieMassiva() {
    srand(time(NULL));
    const int size = 53;

    randSort(xc, size);


}

int p = 0;
MainWindow::~MainWindow()
{
    delete ui;
}
QString otvet, an;

void MainWindow::ren()
{





}
void MainWindow::_return()
{

    int a = xc[p];

    switch(a)
{
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
    case 11:
        ui->label->setText("Полтавская битва");
        otvet = "27 июня 1709";
        break;
    case 12:
        ui->label->setText("Петр I объявляет себя Императором России");
        otvet = "1721";
        break;
    case 13:
        ui->label->setText("Основание Московского Университета(Елизавета Петровна)");
        otvet = "1755";
        break;
    case 14:
        ui->label->setText("Правление Екатерины II (Потемкин-Таврический, Суворов-Рымникский, Орлов-Чесменский)");
        otvet = "1762-1796";
        break;
    case 15:
        ui->label->setText("«Бостонское чаепитие» (США)");
        otvet = "1773";
        break;
    case 16:
        ui->label->setText("Восстание Емельяна Пугачева");
        otvet = "1773-1775";
        break;
    case 17:
        ui->label->setText("Начало Французской Революции");
        otvet = "1789";
        break;
    case 18:
        ui->label->setText("Правление Павла I");
        otvet = "1796-1801";
        break;
    case 19:
        ui->label->setText("Правление Александра I (Аракчеевщина)");
        otvet = "1801-1825";
        break;
    case 20:
        ui->label->setText("В состав Российской Империи была включена Финляндия");
        otvet = "1809";
        break;
    case 21:
        ui->label->setText("Отечественная война с Наполеоновской Францией (Кутузов)");
        otvet = "1812";
        break;
    case 22:
        ui->label->setText("Война на Кавказе (присоединение Дагестана и Чечни)");
        otvet = "1817-1864";
        break;
    case 23:
        ui->label->setText("Восстание декабристов на Сенатской площади(Рылеев, Муравьев, Бестужев)");
        otvet = "14 декабря 1825";
        break;
    case 24:
        ui->label->setText("Правление Николая I (Бенкендорф, Уваров)");
        otvet = "1825-1855";
        break;
    case 25:
        ui->label->setText("Крымская война (Горчаков, Нахимов, Синопское сражение)");
        otvet = "1853-1856";
        break;
    case 26:
        ui->label->setText("Правление Александра II (буржуазные реформы)");
        otvet = "1855-1881";
        break;
    case 27:
        ui->label->setText("Отмена крепостного права");
        otvet = "1861";
        break;
    case 28:
        ui->label->setText("Продажа Аляски США");
        otvet = "1867";
        break;
    case 29:
        ui->label->setText("Правление Александра III");
        otvet = "1881-1894";
        break;
    case 30:
        ui->label->setText("Правление Николая II");
        otvet = "1894-1917";
        break;
    case 31:
        ui->label->setText("Русско-Японская война");
        otvet = "1904-1905";
        break;
    case 32:
        ui->label->setText("Кровавое воскресенье");
        otvet = "9 января 1905";
        break;
    case 33:
        ui->label->setText("Первая мировая война (Антанта)");
        otvet = "1914-1918";
        break;
    case 34:
        ui->label->setText("Февральская и Октябрьская Революция");
        otvet = "1917";
        break;
    case 35:
        ui->label->setText("Правление Ленина В.И.(гражданская война)");
        otvet = "1917-1924";
        break;
    case 36:
        ui->label->setText("Подписаны документы об образовании СССР (Союза Советских Социалистических Республик)");
        otvet = "30 декабря 1922";
        break;
    case 37:
        ui->label->setText("Правление Сталина И.В.(индустриализация, коллективизация, репрессии)");
        otvet = "1924-1953";
        break;
    case 38:
        ui->label->setText("СССР был принят в Лигу Наций");
        otvet = "18 сентября 1934";
        break;
    case 39:
        ui->label->setText("Подписание пакта Молотова-Риббентропа о ненападении между Германией и СССР");
        otvet = "23 августа 1939";
        break;
    case 40:
        ui->label->setText("Вторая Мировая война");
        otvet = "1 сентября 1939-2 сентября 1945";
        break;

    case 41:
        ui->label->setText("Советско-финская война");
        otvet = "1939-1940";
        break;
    case 42:
        ui->label->setText("Великая Отечественная Война");
        otvet = "22 июня 1941-9 мая 1945";
        break;
    case 43:
        ui->label->setText("Битва за Москву");
        otvet = "30 сентября 1941-10 января 1942";
        break;
    case 44:
        ui->label->setText("Сталинградская битва (Операция Уран)");
        otvet = "19 ноября 1942-2 февраля 1943";
        break;
    case 45:
        ui->label->setText("Тегеранская конференция (Сталин, Черчилль, Рузвельт)");
        otvet = "1943";
        break;
    case 46:
        ui->label->setText("Курская дуга");
        otvet = "5 июля-23 августа 1943";
        break;
    case 47:
        ui->label->setText("Берлинская операция");
        otvet = "1945";
        break;
    case 48:
        ui->label->setText("Правление Хрущева Н.С.(хрущевская оттепель)");
        otvet = "1953-1964";
        break;
    case 49:
        ui->label->setText("Первый полет в космос Юрия Гагарина (Сергей Павлович Королев)");
        otvet = "1961";
        break;
    case 50:
        ui->label->setText("Правление Брежнева Л.И.(брежневский застой)");
        otvet = "1964-1982";
        break;
    case 51:
        ui->label->setText("Правление Андропова Ю.В.");
        otvet = "1982-1984";
        break;
    case 52:
        ui->label->setText("Правление Черненко К.У.");
        otvet = "1984-1985";
        break;
    case 53:
        ui->label->setText("Правление Горбачева М.С. (перестройка)");
        otvet = "1985-1991";
        break;

    default:
        ui->label->setText("nu");
   }

}

void MainWindow::on_pushButton_clicked()
{
 p++;
    if (p == 53)
    {
        p = 0;
        ui->pushButton->hide();
    }

    // вектор из десяти элементов
   // перемешиваеаем
       an = ui->lineEdit->text();


chetVer++;
ui->ver->setNum(chetVer);

    if (an == otvet)
    {
    ui->dr->setStyleSheet("color: rgb(125, 255, 39)");
   ui->dr->setText("Правильно!");
   chetPlus++;
   ui->plus->setNum(chetPlus);
    }
    else
    {
        ui->dr->setStyleSheet("color: rgb(255, 62, 28)");
        ui->dr->setText("Неправильно!");
        chetMinus++;
        ui->minus->setNum(chetMinus);
    }
    _return();


}


void MainWindow::on_restart_clicked()
{

    PeremeshivanieMassiva();
    chetVer = 0;
    ui->ver->setNum(chetVer);
    p = 0;
    ui->pushButton->show();
    on_pushButton_clicked();

}

