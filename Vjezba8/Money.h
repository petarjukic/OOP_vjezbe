#ifndef Money_H
#define Money_H
#include<iostream>

using namespace std;

class Money {
private:
	int kune;
	int lipe;
public:
	Money() { kune = 0; lipe = 0; }
	Money(int k);
	Money(int k, int l);
	
	friend Money operator+ (const Money& j1, const Money& j2);
	friend Money operator- (const Money& j1, const Money& j2);
	Money& operator+= (Money& j1);
	Money& operator-= (Money& j1);
	friend ostream& operator<< (ostream& os, const Money& rez);
	operator double(){ return (kune * 100. + lipe) / 100; }
};

#endif