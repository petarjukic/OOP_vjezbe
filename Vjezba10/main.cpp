#include <fstream>
#include <iostream>
#include<string>
#include <iterator>
#include <vector>
#include<algorithm>
#include"Vece.h"
#include"Manje.h"
#include"Usporedba.h"

using namespace std;

bool comp(string a, string b)
{
	return stoi(a) < stoi(b);
}

int main()
{
	vector<string> v;
	string line;
	
	try{
		ifstream fin("numbers.txt");
		if (!fin)
			throw fin;
			istream_iterator<string> is(fin), kraj;
			copy(is,kraj,back_inserter(v));
	}
	catch(...){
		cout << "nije moguce otvoriti datoteku" << endl;
	}

	ostream_iterator<string> os(cout, "\n");
	copy(v.begin(), v.end(), os);
	

	int broj = count_if(v.begin(), v.end(), vece(500));
	cout << endl << endl << "broj brojeva koji su veci od 500 je:" << broj << endl;
	

	vector<string>::iterator it_min;
	it_min = min_element(v.begin(), v.end(),comp);
	cout << "najmanje broj je:" << *it_min << endl;
	
	vector<string>::iterator it_max;
	it_max = max_element(v.begin(), v.end(), comp);
	cout << "najveci broj je:" << *it_max << endl;

	cout << endl << endl << "nakon brisanja manjih od 300" << endl;
	v.erase(remove_if(v.begin(), v.end(), manje(300)), v.end());
	copy(v.begin(), v.end(), os);

	cout <<	endl << endl << "nakon sortiranja" << endl;
	sort(v.begin(), v.end(), usp());
	copy(v.begin(), v.end(), os);
}