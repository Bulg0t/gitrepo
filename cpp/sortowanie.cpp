/*
 * sortowanie.cpp
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int n){
    srand(time(NULL));
    for (int i = 0; i<n; i++){
        tab[i] = rand()%n;
    }
}

void copytab(int tab[], int tab2[], int n){
    for (int i=0; i<n; i++){
        tab2[i] = tab[i];
    }
}

void wyswietl(int tab[], int n){
    for(int i=0; i<n; i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}

void insert_sort(int tab[], int n){
    int i,k,el;
    for(i=1; i<n; i++){
        el = tab[i];
        k = i-1;
        while(k>=0 && tab[k] < el){
            tab[k+1]=tab[k];
            k--;
        }
        tab[k+1] = el;
    }
}

void zamien(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void selection_sort(int tab[], int n){
    int ile = 0;
    int i,k,j;
    for(i=0; i<n; i++){
        k = i;
        for(j = i+1; j<n; j++){
            if (tab[j]<tab[k]){
                k = j;
                ile++;
            }
        }
        zamien(tab[k], tab[i]);
    }
    cout<<"Zamian przy uzyciu selection sort: "<<ile<<endl;
}

void boubble_sort(int tab[], int n){
    int ile = 0;
    for (int i=n-1; i>0; i--){
        for (int j = 0; j<i; j++){
            //cout<<"Indeks j = "<<j<<" ";
            if (tab[j] < tab[j + 1]){
                zamien(tab[j], tab[j+1]);
                ile++;
            }
        }
        //cout<<endl;
    }
    cout<<"Zamian przy uzyciu boubble sort: "<<ile<<endl;
}

int main(int argc, char **argv)
{
    int tab[50];
    int tab2[50];
    int n = 0;
    cout<<"Ile elementów ma zawierać twoja tablica (max=50)? ";
    cin>>n;
    wypelnij(tab,n);
    copytab(tab, tab2, n);
    wyswietl(tab2, n);
    selection_sort(tab, n);
    boubble_sort(tab2, n);
    wyswietl(tab, n);
    return 0;
}

