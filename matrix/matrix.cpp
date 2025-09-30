#include <iostream>
#include "matrice.h"

using namespace std;

int main()
{
	matrice t1(3, 3), t2(3, 3), t3(3, 3), t4(2, 2);
	t1.show();
	t1.values[0][0] = 1;
	t1.values[0][1] = 3;
	t1.values[0][2] = -1;
	t1.values[1][0] = 2;
	t1.values[1][1] = 3;
	t1.values[1][2] = 0;
	t1.values[2][0] = -2;
	t1.values[2][1] = 1;
	t1.values[2][2] = 1;
	t1.show();

	t2.show();
	t2.values[0][0] = -2;
	t2.values[0][1] = 3;
	t2.values[0][2] = 1;
	t2.values[1][0] = 3;
	t2.values[1][1] = 0;
	t2.values[1][2] = 3;
	t2.values[2][0] = 1;
	t2.values[2][1] = 2;
	t2.values[2][2] = 2;
	t2.show();

	t3 = t1 * t2;

	t3.show();

	cout << t2.det() << '\n';

	t4.values[0][0] = 1;
	t4.values[0][1] = 2;
	t4.values[1][0] = 3;
	t4.values[1][1] = 4;

	cout << t4.det() << '\n';

	return 0;
}

