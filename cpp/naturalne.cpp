/*
 * naturalne.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n = 0;
	int m = 0;
	cout << "Podaj przedział liczb od n do m" <<endl;
	cin >> n;
	cin >> m;
	for(n = 0; n<m+1; n++) {
		cout << n << " ";
}
	return 0;
}

