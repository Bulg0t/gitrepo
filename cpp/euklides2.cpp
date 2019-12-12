/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int NWD_it1(int a, int b){
	int i = 0;
		while(a > 0){
			i++;
			a = a % b;
			b = b - a;
		}
cout << "Największy wspólny dzielnik to: "<< b <<endl;
cout << "Powtórzenia: " << i << endl;
	return b;
	}


int NWD_re1(int a, int b){
	if(a!= 0){
		return NWD_re1(a%b, b-a%b);
		}
	else
		return b;
	}

int NWD_re2(int a, int b){
	if(b == 0){
		return a;
		}
	else
		return NWD_re2(b, a%b);
	//napisac iteracyjna nwd_re2
	}
int NWD_it2(int a, int b){
	int i = 0;
	while(b > 0){
		i++;
		a = b;
		b = a%b;
		}
	return a;
	}
int main(int argc, char **argv)
{
	int a, b, i;
	a = b = i = 0;
	cout << "Podaj dwie liczby całkowite: "<< endl;
	cin >> a >> b;
	cout << "Największy wspólny dzielnik to: " << NWD_re1(a,b) << endl;
	cout << "Największy wspólny dzielnik to: " << NWD_re2(a,b) << endl;
	cout << "Największy wspólny dzielnik to: " << NWD_it2(a,b) << endl;
	
	
	return 0;
}

