/*
 * tablica2.cpp
 */


#include <iostream>
using namespace std;

void pobierzOceny(int t[], int r){
	cout << "Podaj "<<r<<" ocen: " << endl;
	int i;
	for(i = 0;i<r;i++){
	cin >> t[i];
	}

	}

void drukujTab(int t[], int r){
	int i;
	for (i = 0; i<r; i++){
		cout << t[i] << " ";
		}

	}
<<<<<<< HEAD

float srednia(int t[], int r){
    int i;
    double s;
    for (i = 0; i < r; i++){
        s = s + t[i];
    }
    cout << float(s) / float(r);
}
//float srednia(int t[], int r){
	//int i;
	//double suma;
	//for (i = 0; i<r; i++){
	//	suma = suma + t[i];

		//}
	//cout << suma/r;
	//}

int main(int argc, char **argv)
{
=======
float srednia(int t[], int r) {
	int i;
	float srednia;
    for (i=0; i < r; i++){
		srednia += t[i];
    }
    return srednia / r;
   }

int main(int argc, char **argv){

>>>>>>> 8d871e205f78072a7dd2222495dc910acdf6f847
	cout << "Ile ocen podasz ?";
	int rozmiar;
	cin >> rozmiar;
	int tablica[rozmiar];
	pobierzOceny(tablica, rozmiar);
	drukujTab(tablica,rozmiar);
	cout << "Twoja srednia to: "<< srednia(tablica, rozmiar);
	return 0;
}

