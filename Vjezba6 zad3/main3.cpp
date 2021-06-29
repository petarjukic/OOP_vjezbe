#include"Player.h"
#include"ComputerPlayer.h"
#include"HumanPlayer.h"
#include"Game.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

void dvaIgraca()
{
	vector<Player*> pl;
	Game igra;

	string ime1, ime2;
	cout << "igrac1: unesite ime" << endl;
	cin >> ime1;
	cout << "igrac2: unesite ime" << endl;
	cin >> ime2;
	HumanPlayer igrac1(ime1);
	HumanPlayer igrac2(ime2);
	Player* p1 = &igrac1;
	Player* p2 = &igrac2;
	pl.push_back(p1);
	pl.push_back(p2);

	igra.setPlayer(pl);
	igra.igra();
}

void igracKomp()
{
	vector<Player*> pl;
	Game igra;
	string ime1;
	
	cout << "igrac1: unesite ime" << endl;
	cin >> ime1;
	HumanPlayer igrac1(ime1);
	Player* p1 = &igrac1;
	pl.push_back(p1);

	igra.setPlayer(pl);
	igra.igra();
}

int main()
{
	int brigraca;

	do
	{
	cout << "zelite li igrati prvotiv drugog igraca ili kompjutera\nako zelite protiv igraca unesite 2 a " <<
		"ako zelite protiv kompjutera unesite 1" << endl;
	cin >> brigraca;
	} while (brigraca != 1 && brigraca != 2);

	if (brigraca == 2) {
		dvaIgraca();
	}
	else {
		igracKomp();
	}
}