#ifndef kartaa
#define kartaa

#include<vector>
#include<string>

using namespace std;

class Karta {
private:
	string zog[4];
	string* broj;

public:
	Karta();
	void get_zog();
	void set_zog();
	void get_broj();
	void set_broj();
	~Karta();
};

#endif