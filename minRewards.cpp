#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> m = {8,4,2,1,3,6,7,9,5};
	vector<int> n = {1,1,1,1,1,1,1,1,1};
	for(int i = 1; i < 9; i++)
		if(m[i] > m[i - 1]) n[i] = n[i - 1] + 1;
	for(int i = 7; i >= 0; i--)
		if(m[i] > m[i + 1]) n[i] = max(n[i], n[i+1] + 1);	
	for(int i = 0; i < 9; i++) cout << n[i] << " ";
	cout << endl;
	cout << accumulate(n.begin(), n.end(), 0) << endl;
}
