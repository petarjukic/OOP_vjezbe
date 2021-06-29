#include"Book.h"
#include<iostream>
#include<string>
#include<vector>


Book::Book()
{}
Book::Book(string ime, string nasl, int god) 
{
	godina_izdanja = god;
	naslov = nasl;
	autor = ime;
}

Book::~Book()
{
	naslov.clear();
	autor.clear();
}
