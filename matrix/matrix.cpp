#include <iostream>
#include "matrice.h"

using namespace std;

int main()
{
	matrice t1(2, 2), t2(2, 2);
	t1.show();
	t1.values[0][0] = 1;
	t1.values[0][1] = 2;
	t1.values[1][0] = 3;
	t1.values[1][1] = 4;
	t1.show();

	t2 = t1 * 3;

	t2.show();
}

