#include"EBook.h"
#include<iostream>
#include<string>
#include<vector>


using namespace std;

EBook::EBook(string ime, string nasl, string imdat,int godizd ,int vel) :Book(ime,nasl,godizd) {
	ime_datoteke = imdat;
	velicina = vel;
}

