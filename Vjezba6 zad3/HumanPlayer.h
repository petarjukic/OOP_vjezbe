#ifndef HumanPlayer_H
#define HumanPlayer_H
#include "Player.h"
#include <string>

using namespace std;

class HumanPlayer :public Player {
private:
	string ime;
public:
	HumanPlayer(string i){
		ime = i;
	}
	string vrati_ime() {
		return ime;
	}
	void odabir_brojaH();
	void odabir_brojaC(){}
	~HumanPlayer() { ime.clear(); }
};

#endif