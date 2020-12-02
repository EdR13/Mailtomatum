#include "automata.h"

Automata::Automata()
{

}

bool Automata::isValid(const QString &email)
{
    bool isValidE = true;
    for (int i(0); i < email.length(); ++i)
    {
        if (estado == q0)
        {
            if(w.contains(email.at(i)))
            {
                estado = q1;
                isValidE = false;
            }
            else
            {
                estado = q7;
                isValidE = false;
            }
        }
        else if (estado == q1)
        {
            if (w.contains(email.at(i)))
            {
                estado = q1;
                isValidE = false;
            }
            else if (p.contains(email.at(i)))
            {
                estado = q8;
                isValidE = false;

            }
            else if (a.contains(email.at(i)))
            {
                estado = q2;
                isValidE = false;
            }
            else
            {
                estado = q7;
                isValidE = false;
            }
        }
        else if (estado == q2)
        {
            if(w.contains(email.at(i)))
            {
                estado = q3;
                isValidE = false;
            }
            else
            {
                estado = q7;
                isValidE = false;
            }
        }
        else if (estado == q3)
        {
            if(w.contains(email.at(i)))
            {
                estado = q3;
                isValidE = false;
            }
            else if (p.contains(email.at(i)))
            {
                estado = q4;
                isValidE = false;
            }
            else
            {
                estado = q6;
                isValidE = false;
            }
        }
        else if (estado == q4)
        {
            if (w.contains(email.at(i)))
            {
                estado = q5;
                isValidE = true;
            }
            else
            {
                estado = q6;
                isValidE = false;
            }
        }
        else if (estado == q5)
        {
            if (w.contains(email.at(i)))
            {
                estado = q5;
                isValidE = true;
            }
            else if (p.contains(email.at(i)))
            {
                estado = q4;
                isValidE = false;
            }
            else
            {
                estado = q6;
                isValidE = false;
            }
        }
        else if (estado == q6)
        {
            isValidE = false;
            break;
        }
        else if (estado==q7)
        {
            isValidE = false;
            break;
        }
        else if (estado == q8)
        {
            if (w.contains(email.at(i)))
            {
                estado = q1;
                isValidE = false;
            }
            else
            {
                estado = q7;
                isValidE = false;
            }
        }
    }
    setEstado(0);
    return isValidE;
}

int Automata::getEstado() const
{
    return estado;
}

void Automata::setEstado(int value)
{
    estado = value;
}
