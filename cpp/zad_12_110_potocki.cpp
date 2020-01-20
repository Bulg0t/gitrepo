/*
 * zad_12_110_potocki.cpp
 */


#include <iostream>
using namespace std;

void zamien(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void bubble_sort(int tab[], int n){
    int ile = 0;
    for (int i=n-1; i>0; i--){
        for (int j = 0; j<i; j++){
            //cout<<"Indeks j = "<<j<<" ";
            if (tab[j] < tab[j + 1]){
                zamien(tab[j], tab[j+1]);
                ile++;
            }
        }
	}
}
 
int main(int argc, char **argv)
{
	int tab[4];
	int p;
	int i = 1;
	int j = 0;
	cout << "Podaj liczbę p: " <<endl;
	cin >> p;
	for(i = 1; i<=p; i++){
		if(p%i==0){
		cout << i << endl;
		tab[j] = i;
		j++;
		
	}
		}

		bubble_sort(tab, i);
		cout << tab[j-1];
		
	
	return 0;
}

