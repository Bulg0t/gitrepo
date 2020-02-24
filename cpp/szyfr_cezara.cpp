/*
 * szyfr_cezara.cpp
 * 
 */


#include <iostream>
#include <cstring>
using namespace std;
void szyfruj(char tekst[30], int j, int y){
	int i = 0;
	int kod = 0;
	while(tekst[i] != '\0'){
		kod =(int)tekst[i] + y;
		if(kod > 122) {
			kod -= 26;
			}
		tekst[i] = (char)kod;
		i++;
		}
}
void deszyfruj(char tekst[30], int j, int y){
	int i = 0;
	int kod = 0;
	while(tekst[i] != '\0'){
		kod =(int)tekst[i] - y;
		if(kod > 122) {
			kod -= 26;
			}
		tekst[i] = (char)kod;
		i++;
		}
}

int main(int argc, char **argv)
{
	char tekst[30];
	int y = 0;
	cout << "Podaj klucz: " << endl;
	cin.getline(tekst, 30);
	cout<< endl<<"Podaj przesunięcie: "<<endl;
	cin >> y;
	y = y%26;
	cout << "Zaszyfrowany tekst: ";
	szyfruj(tekst, 0, y);
	cout << tekst << endl;
	cout << "Odszyfrowany tekst: ";
	deszyfruj(tekst, 0, y);
	cout << tekst << endl;
	return 0;
}

