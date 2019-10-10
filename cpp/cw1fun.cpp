/*
 * cw1fun.cpp
 */

#include <iostream>

using namespace std;

    float staz = 1;
    float zarobek = 1000;
    int lata = 0;

void awans (){
		staz += 1;
        zarobek = 1.1 * zarobek;
    }


void drukuj(){
    cout<<"Pracujesz "<<staz<<" lat  i zarabiasz "<<zarobek << endl;
}

int main(){
    cout << "Podaj lata pracy: "<<endl;
    cin >> lata;
    for(int i = 0;i<lata;i++){
    drukuj();
    awans();
    
}
    return 0;
}



