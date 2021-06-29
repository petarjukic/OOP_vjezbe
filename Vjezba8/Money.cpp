#include"Money.h"
#include<iostream>

using namespace std;

Money::Money(int k, int l)
{
	kune = k;
	lipe = l;
}

Money::Money(int k)
{
	kune = k;
	lipe = 0;
}

Money operator+ (const Money& jelo1, const Money& jelo2)
{	
	Money rez;
	rez.kune = jelo1.kune + jelo2.kune;
	rez.lipe = jelo1.lipe + jelo2.lipe;

	if (rez.lipe > 100) {
		rez.kune++;
		rez.lipe -= 100;
	}
	return rez;
}

Money operator- (const Money& jelo1, const Money& jelo2)
{
	Money rez;
	if (jelo1.kune < jelo2.kune) {
		cout << "nije moguce oduzet" << endl;
		return jelo2.kune; 
	}
	rez.kune = jelo1.kune - jelo2.kune;
	
	Money tmp;
	tmp.lipe = jelo1.lipe;

	if (jelo1.lipe < jelo2.lipe) {
		tmp.lipe *= 10;
		rez.lipe = tmp.lipe - jelo2.lipe;
		rez.kune--;
	}
	return rez;
}

Money& Money::operator+= (Money& jelo1)
{
	kune += jelo1.kune;
	lipe += jelo1.lipe;

	if (lipe > 100) {
		lipe -= 100;
		++kune;
	}
	return *this;
}

Money& Money:: operator-=(Money& jelo1)
{
	if (jelo1.kune > kune) {
		cout << "nije moguce oduzet" << endl;
		return *this;
	}
	kune -= jelo1.kune;

	if (jelo1.lipe > lipe) {
		jelo1.lipe *= 10;
		lipe -= jelo1.lipe;
		--kune;
	}
	return *this;
}

ostream& operator<< (ostream& os, const Money& rez)
{
	os << "Cijena: " << rez.kune << " kuna" << "," << rez.lipe << " lipa";
	return os;
}
