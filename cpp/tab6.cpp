/*
 * tab6.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv){
	int tab1[20];
	int max = tab1[0];
	int min = tab1[1];
	srand(time(NULL));
	for (int i = 1;i < 21; i++){ 
			tab1[i] = rand()% 51;
			cout << tab1[i] << " ";
		if(tab1[i] > max){
			max = tab1[i];
			}
		if(tab1[i] < min){
			min = tab1[i];
			}
		}
		cout << endl;
	cout << "Największa wartość: "<< max << endl <<"Najmniejsza wartość: "<< min << endl;
	return 0;
}

