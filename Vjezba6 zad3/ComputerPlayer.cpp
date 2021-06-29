#include"ComputerPlayer.h"
#include<iostream>
#include<time.h>

using namespace std;

void ComputerPlayer::odabir_brojaC()
{
	int od_broj = 0;
	srand (time(NULL));
	od_broj =  rand() % 5 + 1;
	cout << od_broj << endl;
	broj = od_broj;
}