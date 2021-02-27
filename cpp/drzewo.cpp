/*
 * drzewo.cpp
 * 
 */


#include <iostream>
using namespace std;

struct wezel {
	int liczba;
	wezel *lewy;
	wezel *prawy;
	
	} * korzen = NULL;
	
wezel * stworzWezel(int wartosc) {
	wezel *nowy = NULL;
	try {
		nowy = new wezel;
	} catch(bad_alloc) {
		return NULL;
	}
	nowy -> liczba = wartosc;
	nowy->lewy =NULL;
	nowy->prawy=NULL;
	return nowy;
	
}

void dodajWezel(wezel * Wezel, int wartosc){
	if (korzen == NULL) {
		korzen = stworzWezel(wartosc);
	} else {
		if(wartosc < wezel->wartosc){ // wstawiamy wartosc do lewego poddrzewa
			if(wezel->lewy != NULL){
				
			}
			
		}
	}
}

int main(int argc, char **argv)
{
	dodajWezel(korzen, 10);
	cout << korzen->liczba << endl;
	return 0;
}

