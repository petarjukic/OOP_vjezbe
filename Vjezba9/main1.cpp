#include<iostream>

using namespace std;

template <typename T>
T* sortiranje(T* niz, int vel)
{	
	for (int i = 0; i < vel; ++i) {
		for (int j = i + 1; j < vel; ++j) {
		T tmp;
		if (niz[j] < niz[i]) {
			tmp = niz[i];
			niz[i] = niz[j];
			niz[j] = tmp;
			}
		}
	}
	return niz;
}

char* sortiranje(char niz[]) //velicina niza char-ova je 9
{	
	for (int i = 0; i < 9; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			
			if (tolower(niz[j]) <tolower(niz[i])) {
				char tmp;
				tmp = niz[i];
				niz[i] = niz[j];
				niz[j] = tmp;
			}
		}
	}
	cout << endl;
	return niz;
}

int main1()
{
	int* niz;
	int vel;
	cout << "unesi velicinu niza" << endl;
	cin >> vel;

	niz = new int[vel];
	for (int i = 0; i < vel; ++i) {
		int br;
		cin >> br;
		niz[i] = br;
	}

	niz = sortiranje(niz,vel);
	cout << "sortirani niz" << endl;
	for (int i = 0; i < vel; ++i)
		cout << niz[i] << " ";
	

	cout << endl << endl;
	char niz1[] = "azeCgFdBr";
	char* n;
	
	n = sortiranje(niz1);
	cout << "sortirani char" << endl;
	for (int i = 0; i < 9; ++i)
		cout << n[i] << " ";
		
	delete[] niz;
	return 0;
}