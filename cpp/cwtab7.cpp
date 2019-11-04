/*
 * cwtab7.c;
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char znak;
	float a, b;
	cout << "======Witam w kalkulatorze======" << endl;
	cout << "Podaj znak działania: ";
	cin >> znak;
	cout << "Podaj pierwszą liczbę ";
	cin >> a;
	cout << "Podaj drugą liczbę ";
	cin >> b;
	if(znak == '+'){
		cout << a + b;
		}
	if(znak == '-'){
		cout << a - b;
		}
	if(znak == '*'){
		cout << a * b;
		}
	if(znak == '/'){
		cout << a/b;
		}
	
	return 0;
}

