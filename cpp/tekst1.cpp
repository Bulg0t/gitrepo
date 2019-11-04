/*
 * tekst.cpp
 */

#include <iostream>
#define ROZMIAR 10

using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
	int i;
	cout << "Podaj imię i nazwisko: " << endl;
	//cin >> tekst;
	cin.getline(tekst, ROZMIAR);
	//cout << tekst;

	for(i  = 0; i < ROZMIAR; i++){
		cout << tekst[i];		
		}
		cout << endl;
		i = 0;
		while (tekst[i] != '\0'){
			cout << tekst[i] << i;
			i++;
			}
			cout << endl;
		
	return 0;
}

