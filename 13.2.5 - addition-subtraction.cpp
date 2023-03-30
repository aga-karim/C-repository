// Practical 08 || SLO 13.2.5
#include <iostream>
using namespace std;

int main(){
	int a[10][10], b[10][10], c[10][10], row, col, i, j;
	cout << "Enter number of Rows (1-50): ";
	cin >> row;
	cout << "Enter number of Columns (1-50): ";
	cin >> col;
	
	// Elements of 1st Matrix
	cout << endl << "[ Matrix A ]\n";
	for(i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			cout << "Enter elements at a" << i + 1 << j + 1 << ": ";
			cin >> a[i][j];
		}
	}
	// Elements of 2nd Matrix
	cout << endl << "[ Matrix B ]\n";
	for(i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			cout << "Enter elements at b" << i + 1 << j + 1 << ": ";
			cin >> b[i][j];
		}
	}
	// Sum of A & B
	for (i = 0; i < row ; ++i){
		for (j = 0; j < col; ++j){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << endl << "Sum of [A & B]" << endl;
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			cout << c[i][j] << " ";
			if (j == col - 1){
				cout << endl;
			}
		}
	}
	
	// Difference of A & B
	for (i = 0; i < row ; ++i){
		for (j = 0; j < col; ++j){
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	cout << endl << endl << "Difference of [A & B]" << endl;
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			cout << c[i][j] << " ";
			if (j == col - 1){
				cout << endl;
			}
		}
	}
}
