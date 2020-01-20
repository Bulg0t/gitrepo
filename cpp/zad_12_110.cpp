/*
 * zad_12_110_potocki.cpp
 */


#include <iostream>
using namespace std;


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
 
int main(int argc, char **argv)
{
	
	return 0;
}

