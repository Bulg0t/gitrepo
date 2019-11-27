/*
 * palindrom.cpp
 */


#include <iostream>
#include <cstring>

using namespace std;



bool czy_palindrom(char tab[]){
	int rozmiar = strlen(tab) - 1;
	for(int i = 0; i < rozmiar/2; i++){
		if(tab[i] == tab[rozmiar -1 - i])
			;
		else
			return false;
			}

		return true;
	}

void usunSpace(char tab1[], char tab2[]){
	int rozmiar = strlen(tab1);
	for(int i = 0; i < rozmiar; i++){
		if(tab1[i] != ' '){
            tab1[i] == tab2[i];
		}

	}
}
bool czy_palindrom2(char tab[]){
	int rozmiar = strlen(tab);
	for(int i = 0; i < rozmiar/2; i++){
		if(tab[i] == ' ') i++;
		if(tab[i] == tab[rozmiar - 1 - i])
			;
		else
			return false;
			}

		return true;
	}
int main(int argc, char **argv)
{
	int r = 20;
	char napis1[r];
	char napis2[r];
	cin.getline(napis1, 20);
	usunSpace(napis1, napis2);
	cout << napis2 << endl;
	cout << strlen(napis2) << endl;
	if(czy_palindrom2(napis2))
		cout << "To palindrom!" << endl;
		else{
			cout << "To nie palindrom" << endl;
	}
	return 0;
}

