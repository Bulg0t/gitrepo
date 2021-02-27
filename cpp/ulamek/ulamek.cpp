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
	l = li;
	return set_m(mi);
	}


Ulamek::Ulamek(int li, int mi)
{ 
	int q=skroc(li, mi);
	if(mi < 0) q = -q;
	l = li/q;
	m = mi/q;
}

int Ulamek::skroc(int p, int q)
	{ int r;
	if(p == 0) if(q == 0) return 1; else return q;
	else if(q == 0) return p;
	r = p % q;
	while(r) { p = q; q = r; r = p % q; }
	return q;
	}
