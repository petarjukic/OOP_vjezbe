#ifndef HardCopyBook_H
#define HardCopyBook_H
#include"Book.h"

using namespace std;

class HardCopyBook :public Book {
private:
	int broj_stranica;

public:
	HardCopyBook() :Book() { broj_stranica = 0; }
	HardCopyBook(string ime, string nasl, int god, int brstr) :Book(ime,nasl,god) 
	{
		broj_stranica = brstr; 
	}
	int vratiVel() { return 0; }
	~HardCopyBook() {}
};

#endif