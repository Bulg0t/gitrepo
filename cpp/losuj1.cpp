/*
 * losuj1.cpp
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
#include <time.h>
#include <stdlib.h>

using namespace std;

void losuj1(int t[], int r, int a, int b)
{
	long long int tmp = 1;
	for (int i =0; i< 100000000; i++){
		tmp = tmp * i;
		if(tmp > 10000000) tmp = tmp % i;
}
	long int czas = time(NULL);
	cout << "Czas: " << czas << endl;
	srand(czas);
	cout << rand();
	for (int i = 0; i < r; i++){
		//t[i] = rand() % (r+1);
		t[i] = a + rand() % (b - a + 1);
		
		}
}

void drukuj (int t[], int r)
{
	for (int i =0; i<r; i++){
		cout << t[i] << " ";
		}
		cout << endl;
}

void losuj3(float t[], int r)
{
	 int a =5;
	 int b = 20;
	 srand(time(NULL));
	for (int i =0; i<r; i++){
		t[i] = (float)rand()/RAND_MAX * (b - a);
	}
}

void drukuj3 (float t[], int r)
{
	for (int i =0; i<r; i++){
		cout << t[i] << " ";
		}
		cout << endl;
}



int main(int argc, char **argv)
{
	cout << time(NULL);
	cout << "Ile liczb wylosowac?";
	int ile=0;
	cin >> ile;
	int tab[ile];
	for (int i = 0; i<5; i++){
			losuj1(tab, ile, 5, 20);
			drukuj(tab, ile);
		}
		float tab2[ile];
		losuj3(tab2, ile);
		drukuj3(tab2, ile);
	return 0;
}

