#ifndef Game_H
#define Game_H
#include"Player.h"
#include<vector>

using namespace std;

class Game {
private:
	int broj_partija;
public:
	vector<Player*> igr;
	void setPlayer(vector<Player*> p) { igr = p; }
	bool odabirParNepar();
	void kolicina_partija();
	void igra();
	bool zbroj(int br1, int br2);
	void provjera(int i, int j);
	~Game(){}
};

#endif