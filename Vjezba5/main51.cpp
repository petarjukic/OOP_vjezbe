#include<iostream>
#include"karta.h"
#include"igrac.h"

using namespace std;

int main()
{
	cout << "main" << endl;
	int broj_igraca;
	igrac igr1;
	string imeigr;

	cout << "unesi broj igraca" << endl;
	while (true) {
		cin >> broj_igraca;

		if (broj_igraca == 2 || broj_igraca == 4) {
			break;
		}
		else {
			cout << "unos broja igraca nije valjan treba bit 2 ili 4" << endl;
			cin >> broj_igraca;
		}
	}

	cout << "unesi imena igraca" << endl;
	for (int i = 0; i < broj_igraca; i++) {
		cin >> imeigr;
		igr1.set_ime(imeigr, i);
		// igrac igr1(imeigr, broj_igraca);
		//igr1.ime.push_back(ime);
	}

	igr1.get_ime();
	igr1.set_brbod(broj_igraca);
	igr1.get_brbod(broj_igraca);

	Karta k1;
	k1.set_broj();
	k1.get_broj();
	k1.set_zog();
	k1.get_zog();

	//return 0;
}