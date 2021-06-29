#include"HumanPlayer.h"
#include<iostream>

using namespace std;

void HumanPlayer::odabir_brojaH()
{
	do
	{
	cout << "odaberi broj od 1 do 5" << endl;
	cin >> broj;
	} while (broj > 6 || broj < 0);

}