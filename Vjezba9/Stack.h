#ifndef Stack_H
#define Stack_H
#include<iostream>

using namespace std;

template <typename T>
class Stack {
private:
	T* niz;
	int velicina;
	int vrh;

public:
	Stack(int vel);
	void push(T br);
	T pop();
	bool is_empty();
	~Stack();
};
template <typename T>
Stack<T>::Stack(int vel)
{
	niz = new T[vel];
	velicina = vel;
	vrh = -1;
}

template <typename T>
Stack<T>::~Stack()
{
	delete[]  niz;
}

template <typename T>
void Stack<T>::push(T br)
{
	cout << "unos znaka: " << br << endl;
	++vrh;
	niz[vrh] = br;
}

template <typename T>
T Stack<T>::pop()
{
	vrh--;
	return niz[vrh];
}

template <typename T>
bool Stack<T>::is_empty()
{
	vrh--;
	if (vrh > 0)
		return false;
	return true;
}
#endif