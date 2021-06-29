#ifndef Manje_H
#define Manje_H
#include<string>

using namespace std;

class manje {
private:
	int granica;
public:
	manje(int n) {
		granica = n;
	}
	bool operator()(string broj) { if (stoi(broj) < granica) return true; return false; }
};

#endif