/*
 * sortowanie.cpp
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int n){
	srand(time(NULL));
	for (int i = 0; i < n; i++){
		tab[i] = rand() % n;
		}
}
void wyswietl(int tab[], int n){
	for (int i = 0; i < n; i++){
		cout << tab[i] << " ";
		}
	cout << endl;
}
void copytab(int tab[], int tab2[], int n){
	for(int i = 0; i < n; i++){
		tab2[i] = tab[i];
		}
}
void insert_sort(int tab[], int n){
	int i, k, el;
	for (i = 1; i < n; i++){
			el = tab[i];
			k = i-1;
			while(k>= 0 && tab[k] < el){
			tab[k-1]=tab[k];
			k--;	
			}
			tab[k+1] = el;
	}
	
}
void zamien(int &a, int &b){
	int tmp=a;
	a = b;
	b = tmp;
}
void selection_sort(int tab[], int n){
	int i, j, k;
	int ile = 0;
	for (i = 0; i < n; i++){
			k = i;
			for(j=i+1; j<n; j++){
			if(tab[j]<tab[k]){
					k=j;
			}
			}
		zamien(tab[k], tab[i]);
					ile++;

	}

		cout << "Zamian: " << ile << endl;

	
}
void bubble_sort(int tab[], int n){
	int ile = 0;
	for(int i = n-1; i>0; i--){
		cout << "Indeks i = " << i << " ";
		for(int j = 0; j < i; j++){
			cout << "Indeks j = " << j << " ";
		if(tab[j] < tab[j+1]){
		zamien(tab[j], tab[j+1]);
		ile++;
			}
		}
		cout << endl;
		}
	cout << "Zamian: " << ile << endl;

	}

int main(int argc, char **argv){
	int n;
	int tab[50];
	int tab2[50];
	cout << "Ile elementów ma zawierać tablica (max 50)?" << endl;
	cin >> n;
	wypelnij(tab, n);
	copytab(tab, tab2, n);
	wyswietl(tab2, n);
	selection_sort(tab, n);
	bubble_sort(tab2, n);
	wyswietl(tab, n);
	return 0;
}

