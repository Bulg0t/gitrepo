/*
 * lista.cpp
 * 
 */


#include <iostream>
using namespace std;

struct elem_listy{
	int liczba;
	elem_listy *nast;
	
};

int main()
{
	elem_listy *glowa = NULL;
	elem_listy *nowy;
	int dane;
	char odp;
	cout << "Czy dodasz element do listy? (t/n)? " << endl;
	cin >> odp;
	
	while(odp != 'n'){
		cout << "Podaj liczbe: ";
		cin >> dane;
		try{
			nowy = new elem_listy;
		} catch(bad_alloc){
			break;
		}
		
		nowy ->nast = glowa;
		nowy->liczba = dane;
		glowa = nowy;
		
		cout << "Czy dodasz element do listy? (t/n)? " << endl;
		cin >> odp;
		
		}
		elem_listy *tmp = glowa;
		cout << "Oto lista: " << endl;
		while(tmp != NULL) {
			cout << tmp->liczba << " ";
			tmp = tmp->nast;
			
		}
	return 0;
}

