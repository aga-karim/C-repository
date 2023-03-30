// Practical 08 || SLO 13.2.5
#include <iostream>
using namespace std;

int main(){
	int a[10][10], b[10][10], c[10][10];
	int row1, col1, row2, col2, i, j, k;
	
	cout << "Enter Rows & Columns of Matrix A: \n";
	cin >> row1 >> col1;
	cout << "Enter Rows & Columns of Matrix B: \n";
	cin >> row2 >> col2;
	
	while(col1 != row2){
		cout << "Column of Mat A is != Row of Mat B";
		cout << endl;
		cout << "Enter Rows & Columns of Matrix A: \n";
	    cin >> row1 >> col1;
	    cout << "Enter Rows & Columns of Matrix B: \n";
	    cin >> row2 >> col2;
	}
	
	cout << endl << "[ Matrix A ]" << endl;
	for(i = 0; i < row1; ++i){
		for(j = 0; j < col1; ++j){
			cout << "a" << i + 1 << j + 1 << ": ";
			cin >> a[i][j];
		}
	}
	
	cout << endl << "[ Matrix B ]" << endl;
	for(i = 0; i < row2; ++i){
		for(j = 0; j < col2; ++j){
			cout << "b" << i + 1 << j + 1 << ": ";
			cin >> b[i][j];
		}
	}
	
	for(i = 0; i < row1; ++i){
		for(j = 0; j < col2; ++j){
			c[i][j] = 0;
		}
	}
	
	for(i = 0; i < row1; ++i){
		for(j = 0; j < col2; ++j){
			for(k = 0; k < col1; ++k){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	cout << endl << "[ Output Matrix ]" << endl << endl;
	for (i = 0; i < row1; ++i){
		for(j = 0; j < col2; ++j){
			cout << c[i][j] << "  ";
		}
		cout << endl;
	}
}
