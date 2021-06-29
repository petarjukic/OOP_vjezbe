#include<iostream>
#include<vector>

using namespace std;

void trazenje(vector<int> vek, int& min, int& max)
{
	min = vek[0];
	max = vek[0];
	
	vector<int>::iterator it;
	vector<int>::iterator it2 = vek.end() - 1;
	
	for (it = vek.begin(); it < it2; it++, it2--) {
		if (min > * it) {
			min = *it;
		}
		if (max < *it) {
			max = *it;
		}
	}
}

std::vector<int> suma(vector<int> vek)
{
	vector<int> noviv;
	vector<int>::iterator it;
	vector<int>::iterator it2 = vek.end()-1;
	
	int sum;
	int j = 1;
	for (it = vek.begin(); it < it2; it++,it2--) {
		
		sum = *it + *it2;
		noviv.assign(j, sum);
		j++;
	}

	return noviv;
}

int main31()
{
	vector<int> vek;
	cout << "unesi brojeve" << endl;

	for (int i = 0; i <= 5; i++) {
		vek.push_back(i);
	}
	for (int i = 0; i <= 5; i++) {
		cout << vek[i] << " ";
	}
	cout << endl;
	vector<int>noviv;
	noviv = suma(vek);

	vector<int>::iterator it = noviv.begin();
	for (it; it < noviv.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	int min = 0, max = 0;
	trazenje(noviv, min, max);

	cout << "najmanj broj je " << min << " a najveci " << max << endl;
	return 0;
}