/*
 * cwtab4.cxx
 */


#include <iostream>
#include <cstring>
#define ROZMIAR 15

using namespace std;


int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int i;
    cout<<"Podaj wyrazy: "<<endl;
    cin.getline(tekst, ROZMIAR);
    for(i = strlen(tekst); i > 0; i--){
		cout << tekst[i - 1];
		}
	
	return 0;
}

