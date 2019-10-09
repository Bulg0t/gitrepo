/*
 * hello.cpp
 */

#include <iostream>

using namespace std;

void awans (float &staz, float &zarobek, int &lata){
    for(lata;staz<=lata;staz++){
        zarobek += staz * 0.1 * zarobek;
    }
}

void drukuj(float &zarobek, int &lata){
    cout<<"Pracujesz "<<lata<<" lat  i zarabiasz "<<zarobek;
}

int main(){
    float staz = 1;
    float zarobek = 1000;
    int lata = 0;
    cout << "Podaj lata pracy: "<<endl;
    cin >> lata;
    awans(staz, zarobek, lata);
    drukuj(zarobek, lata);
    return 0;
}



