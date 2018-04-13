#ifndef DERIVTASK_H
#define DERIVTASK_H
#include "derivative.h"
#include <QString>
#include <QRegExp>
#include <vector>
#include <QDebug>

std::string deriv(std::string arg) {

	QString str = QString::fromStdString(arg);

	QStringList list = str.split("+");
	qDebug() << list;

	std::vector<Variable> variables;

	Derivative::compute(variables);
	return Variable::toString(variables);
}

#endif // DERIVTASK_H
