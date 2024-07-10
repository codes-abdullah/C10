#include <iostream>
struct P
{
	static int x, y;
	void print()
	{
		std::cout<<x<<", "<<y<<std::endl;
	}
};

int P::x;
int P::y;

int main ()
{
	P p1;
	P p2;


	
	p1.x = 10;
	p1.y = 20;
	
	p2.x = 543;
	p2.y = 9438;
	
	p1.print();
	p2.print();
	return 0;
}
