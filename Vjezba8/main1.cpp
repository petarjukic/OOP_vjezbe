#include"Money.h"
#include<iostream>

using namespace std;


int main()
{
	Money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);
	Money racun = juha + becki + salata + pivo; 
	racun -= pivo;
	racun += babic;
		
	cout << racun << endl; 
	double rez = racun;
	cout << "Cijena nakon double: " << rez << "kuna" << endl;
}