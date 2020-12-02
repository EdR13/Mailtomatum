#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <QString>


using namespace std;
class Automata
{
public:
    Automata();
    bool isValid(const QString &email);

    int getEstado() const;
    void setEstado(int value);

private:
    enum estadosEnum{
        q0 = 0,
        q1,
        q2,
        q3,
        q4,
        q5,
        q6,
        q7,
        q8
        };
    QString w = "abcdefghijklmnopqrstuvwxzABCDEFGHIJKLMNOPRSTUVWXYZ0123456789_";
    QString a = "@";
    QString p = ".";
    int estado = 0;
    ///No se declara la o porque son una infinidad de caracteres que no se
    ///aceptarían en el email.
};

#endif // AUTOMATA_H
