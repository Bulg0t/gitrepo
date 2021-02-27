#include <iostream>
#include <cmath> 
#include <stdlib.h>
using namespace std;
class Ulamek {
private:
	int l;
	int m;
public:
	Ulamek (int , int );
	bool set_lm(int , int );
	int zwrocLicznik() {
		return l;
	}
	int zwrocMianownik() {
		return m;
	}
	void drukuj();
	bool set_l(int);
	bool set_m(int);
	int skroc(int , int );
	};


