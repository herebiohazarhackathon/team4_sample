#ifndef HAFF_H
#define HAFF_H
#include <cassert>
#include <cstdint>
#include <iostream>
#include <string>
#include <map>
#define mp(x, y) std::make_pair(x, y)

using std::cin;
using std::cout;
using std::endl;
using std::string;

string Haff(string ss) {
    string s;
//    cin >> ss;
    int l = ss.length();
    auto comp = [](const int& a, const int& b) { return a > b; };
    std::multimap <int, char, decltype(comp)> mm(comp);
    std::map <char, int> a;
    std::map <char, string> H;

    for (int i = 0; i < l; ++i) {
        a[ss[i]]++;
    }
    for (auto k : a) {
        mm.insert(mp(k.second, k.first));
    }
    for (auto k : mm) {
    }

    s = "0";
    for (auto k : mm) {
        H[k.second] = s;
        s = '1' + s;
    }
    if (a.size() > 1) {
        s.erase(s.length() - 2, 2);
        auto k = mm.end();
        k--;
        H[k -> second] = s;
    }

    s = "";
    for (int i = 0; i < l; ++i) {
        s += H[ss[i]];
    }

	return s;
}

#endif // HAFF_H
