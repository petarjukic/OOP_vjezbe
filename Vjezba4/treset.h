#pragma once
#ifndef treset_igra
#define treset_igra

#include<vector>
#include<string>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

void rez(int broj);


class Karta {
public:
	int broj;
	char zog;
	Karta(int broj, char zog);
};

class Spil {
private:
	const int broj_karata = 40;
	vector<Karta> karte;
	int trenutna = 0;
	inline Karta getkartu();

public:
	Spil();
	void mjesanje();
	vector<Karta> getKarte();
	void ispis_spila() const;
};

class Igrac {
public:
	string ime;
	vector<Karta> karte;
	void bodovi(vector<Karta> kart);
	void print() const;
	int broj_bodova = 0;
};

#endif