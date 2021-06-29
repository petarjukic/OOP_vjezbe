#include"Library .h"
#include<iostream>
#include<string>
#include<vector>


using namespace std;

vector<string> Library::trazi() 
{
	vector<string> naslov;
	string ime;
	cout << "unesi autora cije knjige trazis" << endl;
	getline(cin, ime);
	
	vector<Book*>::iterator it;
	int i = 0;
	
	for (it = pbook.begin(); it != pbook.end(); it++) {
		if (pbook[i]->autor == ime) {
			//cout << "naslov djela: " << pbook[i]->naslov << endl;
			naslov.push_back(pbook[i]->naslov);
		}
		i++;
	}
	return naslov;
}

int Library::velMB()
{
	string ime;
	cout << "unesi autora ciju velicinu knjiga u MB trazis" << endl;
	getline(cin, ime);

	vector<Book*>::iterator it;
	int i = 0;
	int zbroj = 0;
	for (it = pbook.begin(); it != pbook.end(); it++) {
		if (pbook[i]->autor == ime) {
			zbroj += pbook[i]->vratiVel();
		}
		i++;
	}
	return zbroj;
}

vector<Book*>Library::pretragaNaslova()
{
	string nasl;
	cout << "unesite rijec po kojoj zelite traziti naslove knjiga" << endl;
	getline(cin, nasl);

	vector<Book*>::iterator it;
	vector<Book*> naslov;
	int i = 0;
	for (it = pbook.begin(); it != pbook.end(); it++) {
		if (pbook[i]->naslov.find(nasl) != string::npos) {
			naslov.push_back(pbook[i]);
		}
		i++;
	}
	return naslov; 
}