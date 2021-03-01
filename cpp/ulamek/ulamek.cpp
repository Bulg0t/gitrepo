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

int Ulamek::skroc(int li, int mi)
	{ int i=0;
	while (li > 0){
		i++;
		li = li%mi;
		mi = mi-li;
	}
		return mi;
	}
