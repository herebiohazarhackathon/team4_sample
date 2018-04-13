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
    // arg - is argument of task , in any format.  look in task description

    return "1,2,3";
}
#endif // TEAM4_H
