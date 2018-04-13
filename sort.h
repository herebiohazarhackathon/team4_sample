#ifndef SORT_H
#define SORT_H
#include <qalgorithms.h>
#include <algorithm>
#include <QString>
#include <QStringList>
#include <QVector>

std::string sort1(std::string arg) {
	QString str = QString::fromStdString(arg);
	QStringList list = str.split(" ");
	QVector<QString> vec = list.toVector();
	QVector<int> vecInt;
	for(auto s: vec) {
		vecInt.push_back(s.toInt());
	}
	std::sort(vecInt.begin(), vecInt.end());
	vec.clear();
	for(auto i: vecInt) {
		vec.push_back(QString::number(i));
	}
	list = QStringList::fromVector(vec);
	str = list.join(" ");
	return str.toStdString();
}


#endif // SORT_H
