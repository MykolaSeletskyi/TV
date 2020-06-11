#include <iostream>
#include "TV.h"
using namespace std;
int main()
{
	TV a;
	TV c;
	Remote b(&a);
	b.power();
	b.goChannel(3);
	++b;
	++b;
	++b;
	++b;
	++b;
	++b;
	+b;
	+b;
	+b;
	+b;
	a.print();

	cout << endl;

	b.setTv(&c);
	b.power();
	++b;
	++b;
	++b;
	++b;
	--b;
	+b;
	+b;
	+b;
	-b;
	c.print();
	return 0;
}