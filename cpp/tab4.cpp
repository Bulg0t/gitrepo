/*
 * tab4.cpp
 */


#include <iostream>
#include <iomanip>


#define W	5
#define K	7

using namespace std;

int main(int argc, char **argv)
{
	float tab1[W][K];
	float a;
	cout << "Podaj liczbę początkową : ";
	cin >> a;
	int r;
	cout << "Podaj stałą liczbę o którą początkowa będzie powiększana: ";
	cin >> r;
	for (int i = 0;i < W; i++){
		for(int j = 0; j < K; j++){
			tab1[i][j] = a;
			cout <<  setw(4) << tab1[i][j] << " ";
			a += r;
			}
		cout << endl;
		}
	return 0;
}

