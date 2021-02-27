/*
 * ulamek.cpp
 * 
 */


#include <iostream>
#include <cmath>
#include "ulamek.h"
#include <stdlib.h>
using namespace std;

bool Ulamek::set_l(int li){
	l = li;
	return true;
	
}
bool Ulamek::set_m(int mi){
	if (mi!= 0) {
		m = mi;
		return true;
	}
	else {
		cout << "Mianownik jest rowny zero" << endl;
		return false;
    }
}
bool Ulamek::set_lm(int li, int mi){
	int q=skroc(li, mi);
	l = li/q;
	return set_m(mi/q);
	}
void Ulamek::drukuj() {
    cout << l << "/" << m;
}
Ulamek::Ulamek(int li, int mi)
{ 
	int q=skroc(li, mi);
	if(mi < 0) q = -q;
	l = li/q;
	m = mi/q;
}

int Ulamek::skroc(int p, int q)
	{ int i;
	if(p == 0) if(q == 0) return 1; else return q; 
	else if (q==0) return p;
	i = p % q;
	while(i) {
		 p = q; 
		 q = i; 
		 i = p % q; 
	}
	return q;
	}
	
/*int NWD_it2(int a, int b){
	int i = 0;
	while(b > 0){
		i++;
		a = b;
		b = a%b;
		}
	return a;
	}
*/
