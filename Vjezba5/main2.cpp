#include<iostream>
#include <cmath> 
#include"board.h"

using namespace std;

int main()
{
	double kord1;
	double kord2;
	
	int dim1, dim2;
	cout << "unesi dimenzije ploce " << endl;
	cin >> dim1;
	cin >> dim2;
	board b(dim1, dim2);

	b.display();

	cout << "unesi koordinate " << endl;
	cin >> kord1;
	cin >> kord2;
	kord1 = round(kord1); kord2 = round(kord2);
	point p1(kord1, kord2);
	
	cin >> kord1;
	cin >> kord2;
	kord1 = round(kord1); kord2 = round(kord2);;
	point p2(kord1, kord2);

	cin >> kord1;
	cin >> kord2;
	kord1 = round(kord1); kord2 = round(kord2);
	point p3(kord1, kord2);

	cin >> kord1;
	cin >> kord2;
	kord1 = round(kord1); kord2 = round(kord2);
	point p4(kord1, kord2);

	char znak;
	cout << "unesi znak za crtat" << endl;
	cin >> znak;

	
	cout << endl << endl << "sa draw char" << endl << endl;
	b.draw_chr(p1, znak);
	cout << endl<< endl;
	b.display();
	b.draw_up_line(p2, znak);
	
	cout << endl <<endl << "upline" << endl;
	cout << endl << endl << endl;
	
	b.display();
	b.draw_line(p3, p4, znak);
	cout << endl << "sa draw line" << endl;
	b.display();

	board novi(b);
	novi.draw_chr(p1,znak);
	novi.display();
}