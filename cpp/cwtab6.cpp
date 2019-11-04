/*
 * cwtab6.cpp
 */


#include <iostream>
#include <cstring>
#define ROZMIAR 100
using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
    cout<<"Podaj wyrazy: "<<endl;
    cin.getline(tekst, ROZMIAR);
	for(int q = 0; q < (int)strlen(tekst); q++){
		if(tekst[q] > 95 && tekst[q] < 124 && tekst[q] != '\0'){
			i++;
			}
		else if(tekst[q] < 95 && tekst[q] > 64){
			j++;
			}
		else if(tekst[q] > 47 && tekst[q] < 58){
			k++;
			}
		else if(tekst[q] == 32 || tekst[q] == 9){
			l++;
			}

		}
	cout << "W tekście jest " << int(i) << " małych liter" << ", " << int(j) << " dużych liter" <<", " << int(k) << " cyfr i " << int(l) << " znaków białych";
	return 0;
}

