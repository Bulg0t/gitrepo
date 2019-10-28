/*
 * tab1.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int rozmiar = 5;
	int tab1[rozmiar];
	int tab2[rozmiar];
	int i = 0;
	cout << "Podaj pierwsze 5 liczb"<<endl;
	for(i = 0;i<rozmiar;i++){
		cin >> tab1[i];
		}
	cout << "Podaj drugie 5 liczb"<<endl;
	for(i = 0;i<rozmiar;i++){
		cin >> tab2[i];
		}
	int suma1 = 0;
	for(int i = 0; i<rozmiar; i++){
		suma1 += tab1[i];
		}
	int suma2 = 0;
	for(int i = 0; i<rozmiar; i++){
		suma2 += tab2[i];
		}
	cout << endl;
	if (suma1 > suma2){
		cout << "Suma liczb w tablicy 1 jest większa";
		}
	else{
		cout << "Suma liczb w tablicy 2 jest większa";
		}
	return 0;
}

