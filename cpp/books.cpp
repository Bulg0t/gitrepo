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

struct ksiazka {
	char autor[50];
	char tytul[20];
	int rok;
	};

void getKsiazki(ksiazka tb[], int ile){
	for(int i = 0; i < ile; i++){
		cout << "Podaj dane " << i+1 << " ksiazki" << endl;
		cout << setw(10) << left << "Tytul: ";
		cin.ignore(1000, '\n');
		cin.getline(tb[i].tytul, 50);
		cout << setw(10) << left << "Autor: ";
		cin.getline(tb[i].autor,50);
		cout << setw(10) << left << "Rok wydania: ";
		cin>> tb[i].rok;
		}
	}
	
void drukuj(ksiazka tb[], int ile){
	for(int i = 0; i < ile; i++){			
		cout << tb[i].tytul << " " << tb[i].autor << " "
		<< tb[i].rok << endl;
}
}

void zapisz(ksiazka tb[], int ile){
	ofstream f("ksiazki.txt", ios::app);
	if(!f.is_open()) {
		cout << "Błąd otwarcia pliku" << endl;
		} else {
		for(int i = 0; i < ile; i++){
		f << tb[i].tytul << " " << tb[i].autor << " "
		<< tb[i].rok << endl;
	}
}
}

void czytaj(){
	string linia;
	ifstream f("ksiazki.txt");
	if (f.is_open()){
		while(getline(f, linia)){
			cout << linia << endl;
		}
	}
}

int main(int argc, char **argv)
{
	int ile;
	cout << "Podaj ile ksiazek chcesz zapisac: ";
	cin >> ile;
	ksiazka tb[ile];
	getKsiazki(tb, ile);
	zapisz(tb, ile);
	cout << endl;
	czytaj();
	return 0;
}

