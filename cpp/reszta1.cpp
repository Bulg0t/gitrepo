/*
 * reszta1.cpp
 */


#include <iostream>
using namespace std;
int nominaly[100];
int liczbaNominalow;


void wczytajNominaly() {
	cout << "Podaj liczbę nominałów: ";
	cin >> liczbaNominalow;
	cout << "Podaj nominały w kolejności malejącej: " << endl;
	int i = 0;
	int nominal = 0;
	cin >> nominal;
	nominaly[i] = nominal;
	i++;
	while(i < liczbaNominalow){
		cin >> nominal;
		if(nominal > nominaly[i-1]) {
			cout << "Nominał wyższy do poprzedniego!" << endl;
			continue;
		}
		nominaly[i] = nominal;
		i++;
		}
	//for(i = 0; i < liczbaNominalow; i++){
		//cin >> nominaly[i];
		//}
	for(int i = 0; i < liczbaNominalow; i++){
		cout << nominaly[i] << " ";
		}
	cout << endl;
	}
void znajdzReszte(int reszta){
	cout << "Wypłacone nominały: "<<endl;
	int aktualnyNominal = 0;
	while (reszta > 0 && aktualnyNominal < liczbaNominalow){
		cout << "reszta = " << reszta << endl;
		while(aktualnyNominal < liczbaNominalow && reszta < nominaly[aktualnyNominal])
		++aktualnyNominal;
		cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
		if(aktualnyNominal < liczbaNominalow && reszta>= nominaly[aktualnyNominal]){
		int lB = reszta / nominaly[aktualnyNominal];
		reszta = reszta - lB*nominaly[aktualnyNominal];
		cout << lB << "X" << nominaly[aktualnyNominal] << "zł" << endl;
	}
		} 
	
	 }


int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
	cout << "Podaj cenę: ";
	cin >> cena;
	do { // petla blokująca
		cout << "Podaj wpłatę: ";
		cin >> wplata;
		}while(wplata < cena);
	znajdzReszte(wplata - cena);
	
	return 0;
}
