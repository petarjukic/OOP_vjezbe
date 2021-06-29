#include"Stack.h"
#include<iostream>

using namespace std;

int main()
{
	Stack<int> st(3);
	st.push(1);
	st.push(5);
	st.push(9);

	if (st.is_empty())
		cout << "stack je prazan" << endl;
	else
		cout << "stack nije prazan" << endl;
	
	cout << "nakon pop funckije" << endl;
	st.pop();
	st.pop();

	if (st.is_empty())
		cout << "stack je prazan" << endl;
	else
		cout << "stack nije prazan" << endl;
}