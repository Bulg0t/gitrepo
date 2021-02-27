#include <iostream>
#include <cmath> // dla funkcji abs
#include "ulamek11.cpp"
using namespace std;
int main () {
 Ulamek f2(18,6);
 cout << "TEST KLASY Ulamek\n";
 cout << f2.ZwrocLicznik() << '/' << f2.ZwrocMian() << endl;
 return 0;
} 
