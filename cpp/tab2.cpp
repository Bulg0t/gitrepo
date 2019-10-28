/*
 * tab2.cpp
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define W	6
#define k	10

int main(int argc, char **argv)
{
	int tab1[W][k];
	int i, j;
	srand(time(NULL));
	int n;
	cout << "Podaj liczbę n";
	cin >> n;
	for (i = 1;i < W; i++){ 
		for(j = 0; j < k; j++){
			tab1[i][j] = rand()% n+1;
			cout << tab1[i][j] << " ";
			}
		cout << endl;
		
		
		}
	return 0;
}

