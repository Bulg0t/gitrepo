/*
 * kwadrat_naturalne.cpp
 * 
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	int n = 0;
	int m = 0;
	cout << "Podaj przedział liczb naturalnych od n do m" <<endl;
	cin >> n;
	cin >> m;
	for(n = 0; n<m+1; n++) {
		cout << pow(n, 2) << " ";
}
	return 0;
}
