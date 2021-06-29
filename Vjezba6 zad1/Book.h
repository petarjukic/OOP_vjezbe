#ifndef Book_H
#define Book_H
#include<string>
#include<vector>

using namespace std;

class Book {
public:
	string autor;
	string naslov;
	int godina_izdanja;
	Book();
	Book(string ime, string nasl,int god);
	virtual int vratiVel() = 0;
	virtual ~Book();
};

#endif