#include"Book.h"
#include"EBook.h"
#include"HardCopyBook .h"
#include"Library .h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

void funk(Library lib)
{
	vector<string> pronadeniNaslov;
	pronadeniNaslov = lib.trazi();

	if (pronadeniNaslov.size() == 0)
		cout << "nije pronaden niti jedan naslov trazenog autora" << endl;

	else {
		vector<string>::iterator it;
		for (it = pronadeniNaslov.begin(); it != pronadeniNaslov.end(); it++) {
			cout << *it << endl;
		}
	}

	int br;
	br = lib.velMB();
	cout << "ukupna velicina je:  MB" << br << endl;

	vector<Book*> naslovi;
	naslovi = lib.pretragaNaslova();
	vector<Book*>::iterator itb;
	int ii = 0;
	cout << "pronadeni naslovi: ";
	for (itb = naslovi.begin(); itb != naslovi.end(); itb++) {
		cout << naslovi[ii]->naslov << ";  ";
		ii++;
	}
}

int main()
{
	vector<Book*> plb;
	EBook eb("Petar Jukic", "O meni", "O_meni.pdf", 2012, 23);
	Book* pb = &eb;
	EBook eb1("Mate Jankovic", "Kuhanje", "Kuhanje.pdf", 2014, 123);
	Book* pb1 = &eb1;
	HardCopyBook hcb("Ivan Males", "Kako pronaci put", 2010, 158);
	Book* pb11 = &hcb;
	EBook eb2("Jure Bosic", "Putovanje kroz vrijeme", "Putovanje_Kroz_Vrijeme.pdf", 2020, 234);
	Book* pb2 = &eb2;
	EBook eb3("Petar Jukic", "Putovanje u proslost", "Putovanje_U_Proslost.pdf", 2020, 324);
	Book* pb3 = &eb3;

	plb.push_back(pb);
	plb.push_back(pb1);
	plb.push_back(pb2);
	plb.push_back(pb3);
	plb.push_back(pb11);
	Library lib;
	lib.setBook(plb);
	
	funk(lib);
}