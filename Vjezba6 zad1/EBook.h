#ifndef EBook_H
#define EBook_H
#include"Book.h"
#include<string>


using namespace std;

class EBook :public Book {
private:
	string ime_datoteke;
	int velicina;
public:
	EBook(string ime, string nasl,string imdat, int godizd,int vel);
	int vratiVel() { return velicina; }
	~EBook() { ime_datoteke.clear();  }
};

#endif