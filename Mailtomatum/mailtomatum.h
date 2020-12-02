#ifndef MAILTOMATUM_H
#define MAILTOMATUM_H

#include <QMainWindow>
#include <QPainter>
#include <QMessageBox>
#include <QSound>

#include "automata.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Mailtomatum; }
QT_END_NAMESPACE

class Mailtomatum : public QMainWindow
{
    Q_OBJECT

public:
    Mailtomatum(QWidget *parent = nullptr);
    ~Mailtomatum();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Mailtomatum *ui;
    void paintEvent(QPaintEvent *pe);
    void enableValidar();

    Automata automata;
    QMessageBox message;

};
#endif // MAILTOMATUM_H
