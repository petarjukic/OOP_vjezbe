#ifndef Usporedba_H
#define Usporedba_H
#include<vector>
#include<string>

using namespace std;

struct usp {
	bool operator() (const string& v1, const string& v2) { return stoi(v1) > stoi(v2); }
};
#endif