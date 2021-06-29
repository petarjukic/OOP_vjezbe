#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool provjera(char str)
{
	str = tolower(str);
	if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') {
		return true;
	}
	return false;
}

vector<string> prijevod(vector<string> vs, int ind)
{
	vector<string> nvss;
	string novis = vs[ind];
	string pravi;
	string rs="";
 
	int vel = novis.size();
	for (int i = 0; i < vel; i++) {
		if (novis[i] == ' ' || i == novis.size()) {
			nvss.push_back(rs);
			rs = "";
		}
		else {
			rs =rs + novis[i];
		}
	}
	int j;
	int velv = vs.size();
	for (int tt = 0; tt < velv; tt++) {
		if (provjera(nvss[tt][0]) == 1) {
			nvss[tt].push_back('h');
			nvss[tt].push_back('a');
			nvss[tt].push_back('y');
		}
		else {
			j = 0;
			while (true) {
				if (provjera(nvss[tt][j]) == 1)
					break;
				else {
					nvss[tt].push_back(nvss[tt][j]);
					nvss[tt].erase(j, 1);
				}
			}
			nvss[tt].push_back('a');
			nvss[tt].push_back('y');
		}
	}

	for (int i = 0; i < nvss.size(); i++) {
		for (int j = 0; j < nvss[i].size(); j++) {
			pravi.push_back(nvss[i][j]);
		}
		pravi.push_back(' ');
	}
	nvss[ind] = pravi;
	return nvss;
}

int main35()
{
	string recenica = "What time is it?";
	string rec1 = "Whats app.";
	string rec2 = "Good afternoon.";
	vector<string> vs;
	vs.push_back(recenica);
	vs.push_back(rec1);
	vs.push_back(rec2);
	int i=0;
	vs = prijevod(vs, i);
	cout << vs[i] << endl;
	return 0;
}
