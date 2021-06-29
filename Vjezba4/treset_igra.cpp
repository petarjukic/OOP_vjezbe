#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include"treset.h"

using namespace std;


void rez(int br)
{
	Spil novi_spil;

	if (br == 2) {
		Igrac igr1;
		Igrac igr2;
	
		cout << "unesi imena igraca" << endl;
		cin >> igr1.ime;
		cin >> igr2.ime;

		novi_spil.mjesanje();
		igr1.karte = novi_spil.getKarte();
		igr2.karte = novi_spil.getKarte();
		
		novi_spil.ispis_spila();
		igr1.bodovi(igr1.karte);
		igr2.bodovi(igr2.karte);

		cout << igr1.ime << ": " << igr1.broj_bodova << endl;
		cout << igr2.ime << ": " << igr2.broj_bodova << endl;
	}

	else{
		Igrac igr1;
		Igrac igr2;
		Igrac igr3;
		Igrac igr4;

		cout << "unesi imena igraca" << endl;
		cin >> igr1.ime;
		cin >> igr2.ime;
		cin >> igr3.ime;
		cin >> igr4.ime;
		

		novi_spil.mjesanje();
		igr1.karte = novi_spil.getKarte();
		igr2.karte = novi_spil.getKarte();
		igr3.karte = novi_spil.getKarte();
		igr4.karte = novi_spil.getKarte();
		
		novi_spil.ispis_spila();

		igr1.bodovi(igr1.karte);
		igr2.bodovi(igr2.karte);
		igr3.bodovi(igr3.karte);
		igr4.bodovi(igr4.karte);

		 igr1.print();
		 igr2.print();
		 igr3.print();
		 igr4.print();
		 cout << endl;
		cout << igr1.ime << ": " << igr1.broj_bodova << endl;
		cout << igr2.ime << ": " << igr2.broj_bodova << endl;
		cout << igr3.ime << ": " << igr3.broj_bodova << endl;
		cout << igr4.ime << ": " << igr4.broj_bodova << endl;
	}
}

void Igrac::bodovi(vector<Karta> ruka)
{
	cout << endl;

	int brojacn1 = 0;
	int brojacn2 = 0;
	int brojacn3 = 0;
	int brojacn4 = 0;

	int brojac1 = 0;
	int brojac2 = 0;
	int brojac3 = 0;


		for (int i = 0; i < 10; i++) {
			if (ruka[i].broj > 3)
				continue;

			if ((ruka[i].broj == 1 && ruka[i].zog == 'k') || (ruka[i].broj == 2 && ruka[i].zog == 'k') || ruka[i].broj == 3 && ruka[i].zog == 'k')
				brojacn1++;
			if ((ruka[i].broj == 1 && ruka[i].zog == 's') || (ruka[i].broj == 2 && ruka[i].zog == 's') || ruka[i].broj == 3 && ruka[i].zog == 's')
				brojacn2++;
			if ((ruka[i].broj == 1 && ruka[i].zog == 'd') || (ruka[i].broj == 2 && ruka[i].zog == 'd') || ruka[i].broj == 3 && ruka[i].zog == 'd')
				brojacn3++;
			if ((ruka[i].broj == 1 && ruka[i].zog == 'b') || (ruka[i].broj == 2 && ruka[i].zog == 'b') || ruka[i].broj == 3 && ruka[i].zog == 'b')
				brojacn4++;

			if (ruka[i].broj == 1) {
				brojac1++;
			}
			if (ruka[i].broj == 2)
				brojac2++;
			if (ruka[i].broj == 3)
				brojac3++;
		}
		if (brojacn1 == 3 || brojacn2 == 3 || brojacn3 == 3 || brojacn4 == 3)
			broj_bodova += 3;
		if (brojac1 == 3 || brojac2 == 3 || brojac3 == 3)
			broj_bodova+= 3;
		else if (brojac1 == 4 || brojac2 == 4 || brojac3 == 4)
			broj_bodova += 4;
		else
			broj_bodova += 0;


		brojac1 = 0;
		brojac2 = 0;
		brojac3 = 0;
		brojacn1 = 0;
		brojacn2 = 0;
		brojacn3 = 0;
		brojacn4 = 0;
}

Karta Spil::getkartu()
{
	return karte[trenutna++];
}

vector<Karta> Spil::getKarte()
{
	vector<Karta> ruka;

	for (int i = 0; i < 10; i++) {
		ruka.push_back(getkartu());
	}
	return ruka;
}

void Spil::mjesanje()
{
	trenutna = 0;
	srand(time(0));

	for (int i = 0; i < karte.size(); i++) {

		int j = (rand() + time(0)) % karte.size();
		Karta tmp = karte[i];
		karte[i] = karte[j];
		karte[j] = tmp;
		
		//cout << stri << " ";
		//if ((i + 1) % 4 == 0) cout << endl;
	}
	
	/*
	cout << "izmjesani" << endl;
	for (int i = 0; i < broj_karata; i++) {
		cout << igr.komb_karata[i] << " ";
		if ((i + 1) % 4 == 0) cout << endl;
	}*/
}

Karta::Karta(int br, char tip)
{
	broj = br;
	zog = tip;
}

Spil::Spil()
{
	int k = 1;
	char zog[] = { 'k', 's','b','d' };
	for (int i = 0; i < 4; i++) { //broj zogova
		for (int j = 1; j <= 10; j++) { //broj brojeva
			k = j;
			if (j > 7) {
				k += 3;
			}
			karte.push_back(Karta(k, zog[i]));
		}
	}
}

void Spil::ispis_spila() const
{
	for (int i = 0; i < broj_karata; i++) {
		cout << karte[i].broj << karte[i].zog <<" " ;
		if ((i + 1) % 4 == 0) cout << endl;
	}
}

void Igrac::print() const
{
	for (int i = 0; i < 10; i++) {
		cout << karte[i].broj << karte[i].zog << " " ;
		if ((i + 1) % 4 == 0) cout << endl;
	}
	cout << endl << endl;
}

