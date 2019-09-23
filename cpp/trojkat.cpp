,/*
 * trojkat.cpp
 * Napisz program, który pobiera od użytkownika 3 liczby, długości boków 
 *  i sprawdza, czy da się z nich zbudować trójkąt.
 * Program powinien wyprowadzić odpowiedni komunikat.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	float a, b, c;
	cout << "Podaj długość pierwszego boku: ";
	cin >> a;
	cout << "Podaj długość drugiego boku: ";
	cin >> b;
	cout << "Podaj długość trzeci boku: ";
	cin >> c;
	if (a + b <= c) { 
	cout << "Na tych bokach nie możesz zbudować trójkąta";
}
	else if (a + c <= b) { 
	cout << "Na tych bokach nie możesz zbudować trójkąta"; 
}
	else if (b + c <= a) {
	cout << "Na tych bokach nie możesz zbudować trójkąta"; 
}
	else {
	cout << "Na tych bokach możesz zbudować trójkąt" <<endl;
}
	if (c == sqrt(a*a + b*b)) {
	cout << "Trójkąt jest prostokątny";
}
	if (a == sqrt(b*b + c*c)) {
	cout << "Trójkąt jest prostokątny";
}
	if (b == sqrt(c*c + a*a)) {
	cout << "Trójkąt jest prostokątny";
}
	return 0;
}

