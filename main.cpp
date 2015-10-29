#include <iostream>
#include "vec.h"

using namespace std;

int main(int argc, char* argv[])
{
	vec i(1.0, 0.0, 0.0), j(0.0, 1.0, 0.0);
	vec k;
	cross(i,j,k);
	cout << k << endl; 
	return 0;
}
