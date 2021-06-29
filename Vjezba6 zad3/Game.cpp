#include"Game.h"
#include<iostream>
#include<string>
#include"ComputerPlayer.h"

using namespace std;

bool Game::odabirParNepar()
{
	char od;
	do
	{
	cout << "zelite li biti par ili nepar. Za par unesite 'p', a za nepar 'n'" << endl;
	cin >> od;
	} while (!(od == 'p' || od == 'P' || od == 'N' || od == 'n'));

	if (od == 'p' || od == 'P')
		return true;
	return false;
}

void Game::kolicina_partija()
{
	int broj;
	do
	{
		cout << "odaberite koliko partija zelite odigrati" << endl;
		cin >> broj;
		broj_partija = broj;
	} while (broj <= 0);
}

bool Game::zbroj(int br1, int br2)
{
	int rez = 0;
	rez = br1 + br2;
	if (rez % 2 == 0)
		return true;
	return false;
}

void Game::provjera(int i, int j)
{
	if (igr.size() == 2) {
		if ( i > j)
			cout << "pobjednik je igrac1 " << igr[0]->vrati_ime() << endl;
		else if (i < j)
			cout << "pobjednik je igrac2 " << igr[1]->vrati_ime() << endl;
		else
			cout << "nerijeseno" << endl;
	}
	else {
		if (i > j)
			cout << "pobjednik je igrac1 " << igr[0]->vrati_ime() << endl;
		else if (i < j)
			cout << "racunalo je pobjednik " << endl;
		else
			cout << "nerijeseno" << endl;
	}
}

void Game::igra()
{
	kolicina_partija();
	ComputerPlayer cmp;
	igr[0]->odabir = odabirParNepar();		

	while(broj_partija != 0){
		
		if(igr.size()==2){
			igr[0]->odabir_brojaH();
			igr[1]->odabir_brojaH();	

			if (igr[0]->odabir == true && zbroj(igr[0]->broj, igr[1]->broj) == true) {
				igr[0]->broj_bodova++;
			}
			else if (igr[0]->odabir == false && zbroj(igr[0]->broj, igr[1]->broj) == false)
				igr[0]->broj_bodova++;
			else
				igr[1]->broj_bodova++;
		}
		
		else {
			igr[0]->odabir_brojaH();
			cmp.odabir_brojaC();
			
			if (igr[0]->odabir == true && zbroj(igr[0]->broj, cmp.broj) == true)
				igr[0]->broj_bodova++;
			else if (igr[0]->odabir == false && zbroj(igr[0]->broj, cmp.broj) == false)
				igr[0]->broj_bodova++;
			else
				cmp.broj_bodova++;
		}
		broj_partija--;
	}

	if (igr.size() == 2)
		provjera(igr[0]->broj_bodova, igr[1]->broj_bodova);
	else
		provjera(igr[0]->broj_bodova, cmp.broj_bodova);
}