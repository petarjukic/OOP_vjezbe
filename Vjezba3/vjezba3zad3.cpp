#include<iostream>
#include<string>

using namespace std;

string brisanje(string str, string podstr)
{
	int pozicija;
	int i = 0;
	int vel = str.size();
	while(i < vel){
		pozicija = str.find(podstr);
		if (pozicija < 0)
			break;
		str.erase(pozicija,pozicija);
		i++;
	}
	
	return str;
}

int main33()
{
	string str = "podstringstr";
	string podstr = "str";

	str = brisanje(str, podstr);
	cout << str << endl;
	return 0;
}