/*
 * struktury.cpp
 * 
 * Copyright 2021 Michał <Michał@BULG0T>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct osoba {
	char imie[20];
	char nazwisko[20];
	int wiek;
	};

void getOsoby(osoba tb[], int ile){
	for(int i = 0; i < ile; i++){
		cout << "Podaj dane " << i+1 << " osoby" << endl;
		cout << setw(10) << left << "Imie: ";
		cin >> tb[i].imie;
		cout << setw(10) << left << "Nazwisko: ";
		cin >> tb[i].nazwisko;
		cout << setw(10) << left << "Wiek: ";
		cin >> tb[i].wiek;
		}
	}
	
void drukuj(osoba tb[], int ile){
	for(int i = 0; i < ile; i++){			
		cout << tb[i].imie << " " << tb[i].nazwisko << " "
		<< tb[i].wiek << endl;
}
}

void zapisz(osoba tb[], int ile){
	ofstream f("osoby.txt", ios::app);
	if(!f.is_open()) {
		cout << "Błąd otwarcia pliku" << endl;
		} else {
		for(int i = 0; i < ile; i++){
		f << tb[i].imie << " " << tb[i].nazwisko << " "
		<< tb[i].wiek << endl;
	}
}
}

void czytaj(){
	string linia;
	ifstream f("osoby.txt");
	if (f.is_open()){
		while(getline(f, linia)){
			cout << linia << endl;
		}
	}
}

int main(int argc, char **argv)
{
	int ile = 2;
	osoba tb[ile];
	getOsoby(tb, ile);
	drukuj(tb, ile);
	zapisz(tb, ile);
	cout << endl;
	czytaj();
	return 0;
}

