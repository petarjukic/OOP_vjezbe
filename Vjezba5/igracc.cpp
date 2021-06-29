#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include"igrac.h"

using namespace std;

igrac::igrac()
{
	//broj_bodova = new int[br];
	//ime.push_back(im);
	cout << "igrac konstruktor" << endl;
}

void igrac::set_brbod(int br)
{
	broj_bodova = new int[br];
	for (int i = 0; i < br; i++) {
		broj_bodova[i] = 0;
	}
}

void igrac::get_brbod(int br)
{
	for (int i = 0; i < br; i++) {
		cout << broj_bodova[i] << "  ";
	}
}

void igrac::set_ime(string im, int i)
{
	for (int j = i; j < i + 1; j++) {
		ime.push_back(im);
	}
}

void igrac::get_ime()
{
	cout << "imena igraca:" << endl;
	vector<string>::iterator it = ime.begin();
	for (it; it != ime.end(); it++) {
		cout << *it << " ";
	}
}

igrac::~igrac()
{
	cout << endl << "igrac destruktor" << endl;
	ime.clear();
	delete[] broj_bodova;
}