/*
 * hex2dec.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

int hex2dec(char x[]){
	int dlugosc = strlen(x);
	int h = 1;
	int wartosc = 0;
	for(int i = dlugosc-1; i >=0; i--){
		if(x[i]>= '0' && x[i]<='9'){
			wartosc += (x[i] - 48)*h;
			h = h*16;
			}
		else if (x[i]>= 'A' && x[i]<= 'F'){
			wartosc += (x[i] - 55)*h;
			h = h*16;
			}
		else if (x[i]>= 'a' && x[i]<='f'){
			wartosc += (x[i] - 87)*h;
			h = h*16;
			}
		}
	return wartosc;
	}
int dec2hex(char x[]){
	int dlugosc = strlen(x);
	int h = 1;
	int wartosc = 0;
	for(int i = dlugosc-1; i >=0; i--){
		if(x[i]>= '0' && x[i]<='9'){
			wartosc += (x[i] - 48)*h;
			h = h*16;
			}
			}
	}

int main(int argc, char **argv)
{
	char x[4];
	cout << "Podaj liczbę szesnastkową: ";
	cin >> x;
	cout << hex2dec(x) << endl;
	return 0;
}

