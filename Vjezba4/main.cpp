#include<iostream>
#include"treset.h"

using namespace std;

int main()
{

	int broj_igraca;

	cout << "unesi broj igraca" << endl;
	while (true) {
		cin >> broj_igraca;

		if (broj_igraca == 2 || broj_igraca == 4) {
			break;
		}
		else {
			cout << "unos broja igraca nije valjan treba bit 2 ili 4" << endl;
		}
	}

	rez(broj_igraca);
}