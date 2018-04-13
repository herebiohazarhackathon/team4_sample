#ifndef VARIABLE_H
#define VARIABLE_H

#include <string>
#include <vector>

using namespace std;

class Variable
{
public:

    Variable(int k, int p);

    void setK(int k);
    void setP(int p);

    int getK() const;
    int getP() const;


    static string toString(const vector<Variable> exp);

private:

    int k;
    int p;
};

#endif // VARIABLE_H
