/*
#include<iostream>
#include<list>

using namespace std;

list<int> stuffing_bit(list<int> bit)
{
	list<int>::iterator it = bit.begin();
	list<int>::iterator it1 = bit.end();

	int brojac = 0;

	for (it; it != it1; it++) {
		if (*it == 1)
			brojac++;
		else{
			brojac = 0;
		}
		if (brojac == 5) {
			it++;
			bit.insert(it, 0);
		}
	}
	return bit;
}

int main37()
{
	list<int> bitovi;
	list<int>::iterator it = bitovi.begin();
	
	cout << "unesi binarne znamenke " << endl;
	int br;
	
	while (true) {
		cin >> br;

		if (br == 0 || br == 1) {
			bitovi.push_back(br);
		}
		else
		{
			break;
		}
	}
	
	bitovi = stuffing_bit(bitovi);

	it = bitovi.begin();
	list<int>::iterator it1 = bitovi.end();
	
	for (it; it != it1; it++) {
		cout << *it << " ";
	}
	return 0;
}
*/