/*
 * wsp_kompresji.cpp
 */


#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
    float Vk, Vnk;
    cout << "Podaj rozmiar pliku przed kompresj�: " << endl;
    cin >> Vnk;
    cout << "Podaj rozmiar pliku po kompresji: " << endl;
    cin >> Vk;
    cout << "Wsp�czynnik kompresji Rc wynosi: " << Vk/Vnk * 100 << endl;
    cout << "Wsp�czynnik kompresji R'c wynosi: " << (1-Vk/Vnk) * 100 << endl;
	return 0;
}
