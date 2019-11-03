/*
 * tekst.cpp
 * Copyright 2019  <>
 */


#include <iostream>

using namespace std;

#define ROZMIAR 100

int main(int argc, char **argv)
{
    char tekst[ROZMIAR];
    int i;
    int j;
    int k = 1;
    cout<<"Podaj zdanie: "<<endl;
    cin.getline(tekst, ROZMIAR);
    for (i = 0; i < ROZMIAR ; i++){
        cout << tekst[i];
        }
    for (int j=0;j<ROZMIAR;j++){
    if (tekst[j]==' '&&tekst[j] != '\0'){
        k++;
    }
    }
    cout << endl;
    cout<<"Ilosc slow w zdaniu ""'"<<tekst<<"'"" wynosi "<<k - 1<<endl;


    return 0;
}
