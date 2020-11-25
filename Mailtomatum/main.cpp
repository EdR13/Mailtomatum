#include "mailtomatum.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mailtomatum w;
    w.setWindowFlag(Qt::WindowMaximizeButtonHint, false);
    w.setWindowIcon(QIcon(":/images/Capa 1.png"));
    w.show();
    return a.exec();
}
