#include "mailtomatum.h"
#include "ui_mailtomatum.h"

Mailtomatum::Mailtomatum(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mailtomatum)
{
    ui->setupUi(this);
    QPixmap img(":/images/mail1q.png");
    ui->label->setPixmap(img);
    QSound::play(":sounds/Bienvenida.wav");
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
    bool isValid = automata.isValid(ui->lineEdit->text());
    if(isValid)
    {
        QSound::play(":/sounds/Info.wav");
        message.setText("¡El correo es válido!");
        message.setWindowTitle("Correo válido");
        message.setWindowIcon(QIcon(":/images/comprobar.png"));
        message.exec();
    }
    else
    {
        QSound::play(":/sounds/Error.wav");
        message.setText("El correo que ingresaste no es válido.");
        message.setWindowTitle("Correo no válido :(");
        message.setWindowIcon(QIcon(":/images/cancelar.png"));
        message.exec();
    }
}

void Mailtomatum::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
}
