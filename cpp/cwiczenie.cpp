/*
 * cwiczenie.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cout << "Podaj wartość liczby n: " <<endl;
	cin >> n;
	int i = 1;
	while(i < n){
		cout << i << endl;
		i+=2;
		}
	return 0;
}

