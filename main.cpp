#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	int x, i, j;

	cout << "Podaj rozmiar wykonywanego rysunku\n";
	cin >> x;
	cout << '\n';
	
	char array[x][x];

	//kwadrat pe³en
	for(i = 0; i<x; i++) {

		for(j = 0; j<x; j++) {

			array[i][j] = '*';
			cout << array[i][j];

		}
		cout << '\n';
		
	}
	cout << '\n';
	
	//kwadrat pusty
	for(i = 0; i<x; i++) {

		for(j = 0; j<x; j++) {

			if (i==0 || j==0 || i==(x-1) || j==(x-1)){
				array[i][j] = '*';
				cout << array[i][j];
	
			} 
			else {
				array[i][j] = ' ';
				cout << array[i][j];
			}

		}
		
		cout << '\n';
	}
	cout << '\n';
	
	//trójk¹t
	for(i = 0; i<x; i++) {

		for(j = 0; j<x; j++) {

			if (j==0 || i>j || i==j) {
				array[i][j] = '*';
				cout << array[i][j];
	
			} 
			else {
				array[i][j] = ' ';
				cout << array[i][j];
			}

		}
		
		cout << '\n';
	}
	cout << '\n';

	//trójk¹t_2
	for(i = 0; i<x; i++) {

		for(j = 0; j<x; j++) {

			if (j+i>=(x-1)) {
				array[i][j] = '*';
				cout << array[i][j];
	
			} 
			else {
				array[i][j] = ' ';
				cout << array[i][j];
			}

		}
		
		cout << '\n';
	}
	cout << '\n';	

	return 0;



}
