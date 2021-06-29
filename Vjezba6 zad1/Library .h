#ifndef Library_H
#define Library_H
#include"Book.h"
#include"EBook.h"
#include<vector>

class Library {
private:
	vector<Book*> pbook;
public:
	Library() {}
	void setBook(vector<Book*> bk) { pbook = bk; }
	vector<string> trazi();
	int velMB();
	vector<Book*> pretragaNaslova();

	~Library() {}
};

#endif