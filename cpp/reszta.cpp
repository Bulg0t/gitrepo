/*
 * reszta.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
int B[8]={200, 100, 50, 20, 10, 5, 2, 1};
int R,K, i;

cout << "Podaj reszte do wyplacenia: ";
cin >> R;

i=0;
while (R>0)
{
if (R >= B[i])
{
K=R / B[i];
R=R-(B[i]*K);
if (B[i] >= 10){
cout << K << " banknotow " << B[i] <<" z³"<<endl;
}
else
    cout << K << " monet " << B[i] <<" z³"<<endl;
}
i++;
}


return 0;
}
