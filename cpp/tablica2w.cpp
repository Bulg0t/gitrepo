/*
 * tablica2w.cpp
 */


#include <iostream>
using namespace std;

#define N	3
#define M	3


int main(int argc, char **argv)
{
	int tab2W[N][M];
	int i, j;
	srand(time(NULL)); //inicjacja generatora liczb pseudolosowych.
	for (i = 0;i < N; i++){
		cout << "===========Table" << i << "===========" << endl;
		for(j = 0; j < M; j++){
			cout << i << "-" << j << endl;
			tab2W[i][j] = rand() % 101;
			cout << tab2W[i][j] << endl;
			}
		
		
		}

	return 0;
}

