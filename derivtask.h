#ifndef DERIVTASK_H
#define DERIVTASK_H
#include "derivative.h"
#include <QString>
#include <QVector>
#include <QStringList>
#include <vector>

std::string deriv(std::string arg) {


	QString str = QString::fromStdString(arg);

	QStringList list = str.split("+");
	QVector<QString> vec = list.toVector();

	std::vector<Variable> variables;

	for (QString &p : vec) {
		if (p.contains("x")) {
			Variable v(1, 1);
			if (p.contains("*")) {
				QStringList t = p.split("x");
				QString temp = t.at(0);
				temp.replace("*", "");
				v.setK(temp.toInt());
			}
			if (p.contains("^")) {
				QStringList t = p.split("x");
				QString temp = t.at(1);
				temp.replace("^", "");
				v.setP(temp.toInt());
			}
			variables.push_back(v);
		}
	}


	Derivative::compute(variables);

	return Variable::toString(variables);
}

#endif // DERIVTASK_H
