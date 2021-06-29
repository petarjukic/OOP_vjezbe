#include<iostream>
#include<list>

using namespace std;

void unstuffing_bit(list<int>& modbit)
{
	list<int>::iterator it = modbit.begin();
	int brojac = 0;

	for (it; it != modbit.end(); it++) {
		if (*it == 1)
			brojac++;
		else {
			brojac = 0;
		}
		if (brojac == 5) {
			it++;
			it=modbit.erase(it);
			it++;
			//modbit.push_back(*it);
			//modbit.pop_back();
		}
	}
	//return modbit;
}

list<int> stuffing_bit(list<int> bit)
{
	list<int>::iterator it = bit.begin();
	list<int>::iterator it1 = bit.end();

	int brojac = 0;

	for (it; it != it1; it++) {
		if (*it == 1)
			brojac++;
		else {
			brojac = 0;
		}
		if (brojac == 5) {
			it++;
			bit.insert(it, 0);
		}
	}
	return bit;
}

int main38()
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
	cout << "nakon ubacivanja 0" << endl;

	for (it; it != it1; it++) {
		cout << *it << " ";
	}
	
	//bitovi = unstuffing_bit(bitovi);
	unstuffing_bit(bitovi);
	cout << endl << "lista nakon funkcije unstuffing_bit" << endl;
	
	it = bitovi.begin();
	for (it; it != bitovi.end(); it++) {
		cout << *it << " ";
	}
	return 0;
}