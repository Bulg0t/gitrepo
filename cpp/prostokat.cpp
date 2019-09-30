/*
 * petle2.cpp
 */


#include <iostream>
#include <iomanip>

using namespace std;

void drukujTabliczke(int x, int y){
	int i, j;
	for(i = 1; i <= x; i++){
		for(j = 1; j <= y; j++){
			cout << "#" << " ";
			}
	cout << endl;
	}

}

int main(int argc, char **argv)
{
	drukujTabliczke(5, 12);
	
	return 0;
}

