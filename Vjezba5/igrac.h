#ifndef igracc
#define igracc

using namespace std;

class igrac {
public:
	igrac();
	~igrac();
	void get_brbod(int br);
	void set_brbod(int br);
	void get_ime();
	void set_ime(string im, int i);

private:
	int* broj_bodova;
	vector<string> ime;
	vector<string> komb_karata;
};

#endif