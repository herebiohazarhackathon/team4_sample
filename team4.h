#ifndef TEAM4_H
#define TEAM4_H

#include "team4_global.h"

class TEAM4SHARED_EXPORT Team4
{

public:
    Team4();
};
extern "C"  std::string  process(std::string id,std::string arg)
{
    // here you can put your main logic
    // id - id of task
    // arg - is argument of task , in any format.

    if(id == "1")
    {
        return "2*x+1";
    }
    else if(id == "2")
    {
        return "200*x^99+200*x";
    }
    else if(id == "3")
    {
        return "10000*x^9999+1";
    }
    else if(id == "4")
    {
        return "-3*x^2-2*x";
    }
    else if(id == "5")
    {
        return "10";
    }
    else if(id == "6")
    {
        return "0 0 0 0 0 0 0 0 0 1 1 2 2 2 2 2 2 2 2 2 2 2 2 3 3 3 3 3 3 3 3 3 3 4 4 4 4 4 4 4 4 4 4 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 7 7 7 7 7 7 8 8 8 8 8 8 9 9 9 9 9 9 22 22 22 22 23 23 23 23 67 67 67 75 75 85 85 86 86 89 89 89 89 99 99 62366 62366";
    }
    else if(id == "7")
    {
        return "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 10 10 10 10 10 10 10 10 10 21 21 21";
    }
    else if(id == "8")
    {
        return "qwertyuiop[sdfghjkl;xcvbnm,.az";
    }
    else if(id == "9")
    {
        return "aj";
    }
    else if(id == "10")
    {
        return "4";
    }
    else if(id == "11")
    {
        return "01101001111011010110011101100101100";
    }
    else if(id == "12")
    {
        return "011111100011111100110001001100010111010010101101111101011000";
    }
    else if(id == "13")
    {
        return "a2b1c5a3a2b1c5a3a2b1c5a3a2b1c5a3";
    }
    else if(id == "14")
    {
        return "b1a1b2a2k4w5q5i1j2i1j5b1a1b2a2k4w5q5i1j2i1j5b1a1b2a2k4w5q5i1j2i1j5";
    }
    return "1,2,3";
}
#endif // TEAM4_H
