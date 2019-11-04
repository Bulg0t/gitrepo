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
    int j;
    cout<<"Podaj wyrazy: "<<endl;
    cin.getline(tekst, ROZMIAR);

for(j = 0; j < (int)strlen(tekst); j++){
	if(tekst[j]>95 && tekst[j] < 127){
	  	cout<<(char)(tekst[j]-32);
	}
	else if(tekst[j] == 32){
		cout<<(char)(tekst[j]);
		}
	else if(tekst[j]>40 && tekst[j] < 91){
	  	cout<<(char)(tekst[j]+32);
	}
}

    
	return 0;
}

