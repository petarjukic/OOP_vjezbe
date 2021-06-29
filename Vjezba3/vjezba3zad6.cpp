#include<iostream>
#include<list>

using namespace std;

int unosnulaijed(list<int>& lista)
{
	int prvi=0, rez=0, zad;

	list<int>::iterator it;
	list<int>::iterator it2=lista.begin();

	for (it = lista.begin(); it != lista.end(); ++it) {
		if (*it == 1) {
			it2++;
		}

		if (*it % 2 == 0 && *it != 1) {
			lista.insert(it2 ,0);
			it2++;
		}
		if(*it % 2 != 0 && *it != 1){
			lista.insert(it,1);
			it2++;
		}
	}
	it = lista.begin();
	for (it; it != lista.end(); ++it) {
		if (*it == 0) {
			prvi++;
			break;
		}
		prvi++;
	}
	it = lista.begin();
	for (it; it != lista.end(); ++it) {
		if (*it == 1) {
			zad = rez;
		}
		rez++;
	}
	return rez = zad - prvi;
}

list<int> unosbrojeva(list<int> lista, int n)
{
	int m;
	cout << "unesi brojeve liste" << endl;
	for (int i = 0; i < n; i++) {
		cin >> m;
		lista.push_back(m);
	}
	return lista;
}

int main()
{
	list<int> lista;
	int n;
	cout << "unesi velicinu liste" << endl;
	cin >> n;

	lista = unosbrojeva(lista, n);

	list<int>::iterator it1;
	for (it1 = lista.begin(); it1 != lista.end(); ++it1)
		cout << *it1 <<' ' ;

	cout << endl << "lista sa novim br " << endl;
	int brojac;
	brojac = unosnulaijed(lista);

	list<int>::iterator it;
	for (it = lista.begin(); it != lista.end(); ++it)
		cout << *it << ' ';

	cout << endl << "udaljenost je " << brojac;
	return 0;
}