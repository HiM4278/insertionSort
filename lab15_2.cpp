#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N] = {0,1,0,1,0,1,1,1,1,0,1,0,0,1,1,1,1,1,1,0,0,0,0,1,1}; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	showMatrix(B);
	
	return 0;
}
void showMatrix(const bool t[][N]){
	for (int i = 0; i < N; i++)
	{
		 for (int j = 0; j < N; j++)
		{	
		if (t[i][j] == true) {
			cout << 1 << " ";
			} else {
				cout << 0 << " ";
			}
		}
	  cout << "\n";	
	}
	
}
void inputMatrix(double Row[][N]){
	 double K;
	 for (int i = 0;i < N;i++)
	 {	
		cout << "Row "<< i+1 << ": ";
		for (int j = 0; j < N; j++)
		{
		 	cin >> K;
			Row[i][j] = K;
		} 
	 }
}
void findLocalMax(const double a[][N], bool b[][N]){
	for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) {
            if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j])
            {
				b[i][j] = true;
				
            }else {
           		b[i][j] = false; 
            } 
        }
    }
	for (int i = 0; i < N; i++)
	{
		b[0][i] = false;
		b[N-1][i] = false;	
	}
	for (int k = 0; k < N; k++)
	{
		b[k+1][0] = false;
		b[k+1][N-1] = false;
	}
	
}