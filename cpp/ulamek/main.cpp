using namespace std;
#include "ulamek.h"
#include <iostream>
#include <cmath>
int main () {
	Ulamek u1(12, 6);
	Ulamek u2(13,5);
	u1.set_lm(9,3);
	cout << "Sprawdzam przykladowe ulamki: "<<endl;
	cout << u1.zwrocLicznik() << "/" << u1.zwrocMianownik() << endl;
	cout << u2.zwrocLicznik() << "/" << u2.zwrocMianownik() << endl;
	Ulamek*wskUl = &u1;
	wskUl->drukuj();
	return 0;
} 
