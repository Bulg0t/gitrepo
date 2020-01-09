/*
 * zlozonosc.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int x = 8;
	cout << "Podaj szukaną liczbę: " << endl;
	cin >> x;
	int i = 0;
	int n = 5;
	int tb[n] = {1, 2, 3, 4, 5};
	for(i = 0; i<n; i++){
		if(tb[i] == x){
			cout << i;
			return 0;
			}
		}
		cout << -1;
	return 0;
}

