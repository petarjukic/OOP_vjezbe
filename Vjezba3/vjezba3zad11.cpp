#include<iostream>
#include<vector>

using namespace std;

void trazenje(vector<int> vek, int& min, int& max)
{	
	//min = vek[0];
	//max = vek[0];
	vector<int>::iterator it;
	vector<int>::iterator it2 = vek.end();
	
	for (it = vek.begin(); it < it2; it++) {
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
	vector<int>::iterator it2 = vek.end() - 1;
	
	int sum=0;
	int j = 1;
	for (it = vek.begin(); it < it2; it++,it2--) {
		
		sum = *it + *it2;
		noviv.push_back(sum);
		j++;
		sum = 0;
	}
	if(vek.size()%2 != 0){
	
		noviv.push_back(*it);
	}
	else{ return noviv; }
	return noviv;
}

int main()
{
	vector<int> vek;
	cout << "unesi brojeve" << endl;
	int br;
	for (int i = 0; i <= 5; i++) {
		cin >> br;
		vek.push_back(br);
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

	int min , max;
	min = noviv[0];
	max = noviv[0];
	trazenje(noviv, min, max);

	cout << "najmanji broj je " << min << " a najveci " << max << endl;
	return 0;
}