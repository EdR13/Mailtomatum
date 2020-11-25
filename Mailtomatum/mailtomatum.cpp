#include "mailtomatum.h"
#include "ui_mailtomatum.h"

Mailtomatum::Mailtomatum(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mailtomatum)
{
    ui->setupUi(this);
    QPixmap img(":/images/mail1q.png");
    ui->label->setPixmap(img);
}

Mailtomatum::~Mailtomatum()
{
    delete ui;
}

void Mailtomatum::paintEvent(QPaintEvent *pe)
{
    QPixmap pixmap;
    pixmap.load(":/images/2594958 (2).png");
    QPainter paint(this);
    int widWidth = this->ui->centralwidget->width();
    int widHeight = this->ui->centralwidget->height();
    pixmap = pixmap.scaled(widWidth, widHeight, Qt::KeepAspectRatioByExpanding);
    paint.drawPixmap(0, 0, pixmap);
    QWidget::paintEvent(pe);
}

void Mailtomatum::enableValidar()
{
    if(ui->lineEdit->text().length()>0)
    {
        ui->pushButton->setEnabled(true);
    }
    else
    {
        ui->pushButton->setEnabled(false);
    }
}


void Mailtomatum::on_lineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableValidar();
}

void Mailtomatum::on_pushButton_clicked()
{
    //HAcer algo.
}
