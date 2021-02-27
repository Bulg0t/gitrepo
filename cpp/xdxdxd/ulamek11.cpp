#include <cmath>
#include <iostream>
using namespace std;
class Ulamek {
 int l; // licznik
 int m; // mianownik
 int nwp(int p, int q); // największy wspólny podzielnik
public:
 Ulamek(int a=0, int b=1); // Konstruktor
 int ZwrocLicznik()const { return l; }
 int ZwrocMian()const { return m;}
};
Ulamek::Ulamek(int a, int b)
{ int q=nwp(a,b);
 if(b < 0) q = -q; // mianownik ma być zawsze dodatni
 l = a/q;
 m = b/q;
}
int Ulamek::nwp(int p, int q)
{ int r;
 p = abs(p); // obliczenia na wartościach nieujemnych
 q = abs(q);
 // Przypadki szczególne
 if(p == 0) if(q == 0) return 1; else return q;
 else if(q == 0) return p;
 // p>0, q>0
 r = p % q;
 while(r) { p = q; q = r; r = p % q; }
 return q;
}
