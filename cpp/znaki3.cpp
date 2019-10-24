/*
 * znaki2.cpp
 */


#include <iostream>

using namespace std;

void ascii(){
	int i = 0;
	for(i = 65;i<91; i++){
		cout << i << " – " << char(i)<<endl;
		
		}
	
	}

void litery2liczby(char tabzn[], int rozmiar){
	for(int i = 0;i<rozmiar; i++){
		cout << tabzn[i] << " – " << (int)tabzn[i]<<endl;
	
	}
}

void koduj(char tabzn[], int rozmiar){ 
	cout << "Podaj tekst do zakodowania: ";
	cin >> tabzn;
	for (int i = 0; i<rozmiar; i++){
		cout << (int)tabzn[i] << ", ";
		}
	}
	
void dekoduj(int tabzn[], int rozmiar){
	for (int i = 0; i < rozmiar; i++){
		cout << tabzn[i] << "–" << (char)tabzn[i] <<endl;
		
		}
	} 

int main(int argc, char **argv)
{
	int rozmiar = 13;
	char napis[rozmiar];
	int szyfr[rozmiar] = {116, 119, 111, 106, 115, 116, 97, 114, 121, 115, 0};
	koduj(napis, rozmiar);
	cout << endl;
	dekoduj(szyfr, rozmiar);
	return 0;
}

