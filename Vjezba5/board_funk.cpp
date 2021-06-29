#include<iostream>
#include"board.h"

using namespace std;

board::board(int d1, int d2) 
{
	sirina = d1;
	visina = d2;
	ploca = new char[d1 * d2];
	
	for (int i = 0; i < visina; i++) {
		for (int j = 0; j < sirina; j++) {
			if (i == 0 || i == visina - 1 || j == 0 || j == sirina - 1) {
				ploca[i* sirina + j] = '*';
			}
			else {
				ploca[i * sirina + j] = ' ';
			}
		}
		//cout << endl;
	}
}

point::point(double k1, double k2)
{
	this->x = k1;
	this->y = k2;
}


void board:: draw_chr(point p, char znak)
{
	int x = p.x - 1;
	int y = p.y - 1;

	if(x >= visina || y >= sirina || x <= 0){
		cout << "unos velicina nije valjan" << endl;
		return;
	}
	else
		ploca[x * sirina + y] = znak;
}

void board::display()  
{
	cout << endl << endl;

	int j = 0;
	for (int i = 0; i < sirina * visina; i++) {
		if (j == sirina) {
			cout << endl;
			j = 0;
		}
		j++;
		cout << ploca[i];
	}

	cout << endl << endl;
}

void board::draw_up_line(point p, char znak)
{
	int x1 = p.x - 1;
	int y1 = p.y - 1;

	if (x1 >= visina || y1 >= sirina || x1 <= 0) {
		cout << "unos velicina nije valjan" << endl;
		return;
	}

	int x = p.x;
	int y = p.y;
	
	if(p.x >= p.y){

	for (int i = 0; i < p.y - 1; i++) {
		//if (p.x + x + 1 == visina - 1)
			//continue;
		x--;
		y--;
		ploca[x * sirina + y] = znak;
		}
	}
	else {
		for (int i = 0; i < p.x - 1; i++) {
			//if (p.y + y + 1 == visina - 1)
				//continue;
			x--;
			y--;
			ploca[x * sirina + y] = znak;
		}
	}
}

void board::draw_line(point p1, point p2, char znak)
{
	int x1 = p1.x - 1;
	int y1 = p1.y - 1;
	int x2 = p2.x - 1;
	int y2 = p2.y - 1;
	if (x1 >= visina || y1 >= sirina || x1 <= 0 || x2 >= visina || y2 >= sirina || x2 <= 0) {
		cout << "unos velicina nije valjan" << endl;
		return;
	}

	int x = abs(p1.x - p2.x);
	int y = abs(p1.y - p2.y);
	float xk, yk;
	int brojac;

	if (x > y) {
		yk = float(y) / float(x);
		xk = 1;
		brojac = x;
	}
	else {
		xk = float(x) / float(y);
		yk = 1;
		brojac = y;
	}

	if (p1.x > p2.x) {
		xk *= -1;
	}
	if (p1.y > p2.y) {
		yk *= -1;
	}

	for (int i = 0; i < brojac; i++) {
		p1.x += xk;
		p2.y += yk;
		round(p1.x);
		round(p1.y);
		//if (x + i == visina - 1)
			//continue;
		ploca[int(p1.x) * sirina + int(p1.y)] = znak;
	}
}

board::board(const board& novib)

{
	visina = novib.visina;
	sirina = novib.sirina;
	ploca = new char[sirina * visina];
	for (int i = 0; i < sirina * visina; i++) {
		ploca[i] = novib.ploca[i];
	}
}

board::~board()
{
	delete[] ploca;
}