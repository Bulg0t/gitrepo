/*
 * tab5.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int tab1[20];
	srand(time(NULL));
	int n = 20;
	int b = 0;
	for (int i = 1;i < 20; i++){ 
			tab1[i] = rand()% n+1;
		cout << tab1[i] << " ";
	}
	int a = 0;
	cout <<endl << "Podaj liczbę, którą chcesz znaleźć " << endl;
	cin >> a;
	for (int j = 0;j < 20; j++){ 
		if (tab1[j] == a){
			b += 1;
			}
		}
		cout << "W tej tablicy jest "<< b <<" tych liczb. ";

	return 0;
}

