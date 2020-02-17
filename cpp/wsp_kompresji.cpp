/*
 * wsp_kompresji.cpp
 */


#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
    float Vk, Vnk;
    cout << "Podaj rozmiar pliku przed kompresja: " << endl;
    cin >> Vnk;
    cout << "Podaj rozmiar pliku po kompresji: " << endl;
    cin >> Vk;
    if(Vnk > Vk){
    cout << "Wspolczynnik kompresji Rc wynosi: " << Vk/Vnk * 100 << endl;
    cout << "Wspolczynnik kompresji R'c wynosi: " << (1-Vk/Vnk) * 100 << endl;
}
	else {
		cout << "Bledne dane";
		}
	return 0;
}
