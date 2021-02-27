using namespace std;
#include "ulamek.h"
#include <iostream>
#include <cmath>
int main () {
	Ulamek u1(12, 6);
	cout << "Sprawdzam przykladowe ulamki: "<<endl;
	cout << u1.zwrocLicznik() << "/" << u1.zwrocMianownik();
	return 0;
} 
