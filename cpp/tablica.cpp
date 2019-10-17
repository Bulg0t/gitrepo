/*
 * tablica.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

	int rozmiar = 5;
	int tablica[rozmiar];
	int i = 0;
	cout << "Podaj 5 liczb"<<endl;
	for(i = 0;i<rozmiar;i++){
		cin >> tablica[i];
		}
	for(i = 0;i<rozmiar;i++){
	cout << tablica[rozmiar - (i+1)]<<" " ;
		}
	cout << endl;
	for(i = 0;i<rozmiar;i++){
	cout << tablica[i]<<" ";
		}
	/*cout << endl;
	for(i = rozmiar - 1;i>-1;i--){
	cout << tablica[i]<<" " ;
		}*/

	return 0;
}

