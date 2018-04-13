#ifndef TEAM4_H
#define TEAM4_H

#include "team4_global.h"
#include "haff.h"
#include "sort.h"
#include "gcd.h"
#include "uniq.h"
#include "derivtask.h"

class TEAM4SHARED_EXPORT Team4
{

public:
    Team4();
};
extern "C"  std::string  process(std::string id,std::string arg)
{
	int idTask = std::stoi(id);

	switch (idTask)
	{
	case 11:
		return Haff(arg);
	case 6:
		return sort1(arg);
	case 8:
		return uniq(arg);
	case 9:
		return uniq(arg);
	case 10: {
		QStringList l = QString::fromStdString(arg).split(" ");
		int i = l[0].toInt();
		int j = l[1].toInt();
		int res = gcd(i, j);
		return QString::number(res).toStdString();
	}
	case 1:
		return deriv(arg);
	case 2:
		return deriv(arg);
	case 3:
		return deriv(arg);
	case 4:
		return deriv(arg);
	case 5:
		return deriv(arg);

	}
    // here you can put your main logic
    // id - id of task
    // arg - is argument of task , in any format.  look in task description

    return "1,2,3";
}
#endif // TEAM4_H
