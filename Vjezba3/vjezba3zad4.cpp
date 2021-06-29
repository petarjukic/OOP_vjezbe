#include<iostream>
#include<string>

using namespace std;

string najduzi(string str1, string str2)
{
	string najveci;
	string neki;
	int vel1 = str1.size();
	int vel2 = str2.size();

	if (vel1 > vel2) {
		int tmp = vel1;
		vel1 = vel2;
		vel2 = tmp;
	}

	for (int i = 0; i < vel1; i++) {
		for (int j = 0; j < vel2; j++) {
			if (i + j < vel1 && str1[i + j] == str2[j]) {
				neki.push_back(str2[j]);
			}
			else {
				if (neki.size() > najveci.size()) {
					najveci = neki;
					neki.clear();
				}
			}
		}
		neki.clear();
	}
	return najveci;
}

int main34()
{
	string str1 = "subsubingsu";
	string str2 = "kiijaingrrrqqq";
	string najd;
	najd = najduzi(str1, str2);
	cout << najd << endl;
	return 0;
}