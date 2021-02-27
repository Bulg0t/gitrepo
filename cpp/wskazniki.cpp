/*
 * wskazniki.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int x = 11;
	cout << "Wartosc x: " << x << endl;
	cout << "Adres x: " << &x << endl;
	cout << "Wartosc pod adresem x: " << *&x << endl;
	cout << "Rozmiar x: " << sizeof(x) << endl;
	
	int *px;  //deklaracja wskaźnika
	px = &x; //inicjacja wskaźnika 
	cout << "Wartosc wskaznika: " << px << endl;
	cout << "Wartosc pamieci wskazywanej: " << *px << endl;
	
	*px = 4;
	cout << x << endl;
	
	int y = 10;
	px = &y;
	cout << *px << endl;
	
	int *py;
	py = px;
	cout << *px << endl;
	px = &x;
	*py = *px;
	cout << *py << endl;
	
	return 0;
}

