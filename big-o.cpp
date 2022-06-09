#include<bits/stdc++.h>
using namespace std;
int main(){
}

//constant
int constant(int x[]){
	return x[0];
}

// lineal
void lineal(int n){
	for(int i = 0; i < n; i++)
		cout << i << endl;
}

// quadratic
int[][] quadratic(int n){
	int m[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			m[i][j] = n;
}

// cubic
void cubic(int n){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			for(int k = 0; k < n; k++)
				cout << n << endl;
}

//logarithm
int logarihm(int[] arr, int index, int low, int high){	
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;

}

//exponential
int exponential(int n){
	if(num <= 1) return n;
	return exponential(num - 2) + exponential(num - 1);
}

//factorial
void 


