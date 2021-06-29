#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include"karta.h"

using namespace std;

Karta::Karta() {
	cout << "konstruktor za karte" << endl;
}

void Karta::set_zog()
{
	zog[0] = "kupe";
	zog[1] = "spade";
	zog[2] = "bastoni";
	zog[3] = "dinari";
}

void Karta::get_zog()
{
	for (int i = 0; i < 4; i++) {
		cout << zog[i] << "  ";
	}
}

void Karta::set_broj()
{	
	broj = new string[10];
	for (int i = 0; i < 8; i++) {
		if ('1' + (char)i > '7') {
			broj[i] = "11";
			continue;
		}
		broj[i] = '1' + (char)i;
	}
	broj[8] = "12";
	broj[9] = "13";
}

void Karta::get_broj()
{
	for (int i = 0; i < 10; i++) {
		cout << broj[i] << "  ";
	}
}

Karta::~Karta() {
	cout << endl << "destruktor za karte " << endl;
	broj->erase();
}