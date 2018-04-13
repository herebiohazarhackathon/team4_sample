#include "variable.h"


Variable::Variable(int k, int p) : k(k), p(p)
{
}

void Variable::setK(int k)
{
    this->k = k;
}

void Variable::setP(int p)
{
    this->p = p;
}

int Variable::getK() const
{
    return k;
}

int Variable::getP() const
{
    return p;
}

string Variable::toString(const vector<Variable>& exp)
{
    string result;
    for (int i = 0; i < exp.size(); i++)
    {
        if (i != 0 && exp[i].getK() > 0)
            result += '+';
        result += to_string(exp[i].getK());
        if (exp[i].getP() > 0)
        {
            result += "*x";
        }
        if (exp[i].getP() > 1)
        {
            result += "^";
            result += to_string(exp[i].getP());
        }
    }
    return result;
}
