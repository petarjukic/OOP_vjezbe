#ifndef Vece_H
#define Vece_H
#include<string>

using namespace std;

class vece {
private:
	int granica;
public:
	vece(int n){
		granica = n;
	}
	bool operator()(string broj) {  if(stoi(broj) > granica) return true; return false; }
};
#endif