#include<iostream>
#include<string>

using namespace std;

string mjesanje(string str)
{
	reverse(str.begin(), str.end()-1);
	int vel = str.size();
	int j = 0;
	
	for (int i = 0; i < vel; i++) {
		if (str[i] == ' ' || str[i] == '.') {
			reverse(str.begin() + j, str.begin() + i);
			j = i;
			j++;
		}
	}

	str[0] = toupper(str[0]);

	for (int i = 1; i < str.size(); i++) {
		str[i] = tolower(str[i]);
	}
	return str;
}

int main32()
{
	string str = "Ovo je string.";
	
	str = mjesanje(str);
	cout << str;
	return 0;
}