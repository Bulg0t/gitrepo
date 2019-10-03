/*
 * petle2.cpp
 */


#include <iostream>
#include <iomanip>

using namespace std;

void drukujTabliczke(int x, int y){
	int i, j;
	for(i = 1; i <= x; i++){
		for(j = 1; j <= y; j++){
			cout << i*j << " ";
			}
	cout << endl;
	}

}

void prostokat1(int x, int y){
	int i, j;
	for(i = 1; i <= x; i++){
		for(j = 1; j <= y; j++){
			cout << "#";
			}
	cout << endl;
	}
}

void prostokat2(int x, int y, char z){
	int i, j;
	for (i = 1; i<= x; i++){
		for(j = 1; j<= y; j++){
			if (i == 1 || i == x){
				cout<< z;
				}
				else if (j == 1 || j == y){
					cout<< z;
					}
				else{
					cout << " ";
					}
			}
		cout << endl;
	}
	}
void choinka(int x){
	cout << "Podaj wysokość choinki" << endl;
	cin >> x;
	int i, j;
	for(i = 1; i <= x; i++){
		for(j = 1; j <= i; j++)
		{
		cout << "*";
		}
	cout << endl;
	}
}



int main(int argc, char **argv)
{
	prostokat1(5, 12);
	cout << endl;
	int a, b;
	char znak;
	cout << "Podaj rozmiar x, y; ";
	cin >> a >> b;
	cout << "Podaj znak: ";
	cin >> znak;
	prostokat2(a, b, znak);
	cout << endl;
	choinka(10);
	cout << endl;
	return 0;
}

