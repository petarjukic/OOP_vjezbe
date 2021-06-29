#ifndef board_funk
#define board_funk

using namespace std;

class point {
public:
	double x;
	double y;
	point(double k1, double k2);
};

class board {
private:
	int visina;
	int sirina;
	char* ploca;
	
public:
	board(int d1, int d2);
	void draw_chr(point p, char znak);
	void display();
	void draw_up_line(point p, char znak);
	void draw_line(point p1, point p2, char znak);
	board(const board& novib);
	~board();
};

#endif