#ifndef ComputerPlayer_H
#define ComputerPlayer_H
#include"Player.h"
#include<string>

using namespace std;

class ComputerPlayer :public Player{
public:
	//int broj;
	ComputerPlayer() {}
	string vrati_ime() { return ""; }
	void odabir_brojaC();
	void odabir_brojaH(){}
	~ComputerPlayer(){}
};

#endif