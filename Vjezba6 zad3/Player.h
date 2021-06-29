#ifndef Player_H
#define Player_H
#include<string>

using namespace std;

class Player {
public:
	int broj_bodova;
	int broj; //broj kojeg odabiremo za par nepar
	bool odabir;
	Player() { broj_bodova = 0; broj_bodova = 0; odabir = true; }
	

	virtual void odabir_brojaH() = 0;
	virtual string vrati_ime() = 0;
	virtual void odabir_brojaC() = 0;
	virtual ~Player(){}
};

#endif