#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> red = {5,5,3,9};
	vector<int> blue = {3,6,7,1};
	int au = 0;
	bool faster = true;
	sort(red.begin(), red.end());
	sort(blue.begin(), blue.end(), greater<int>());
	for(int i = 0; i < red.size(); i++)
			au += faster ? max(red[i], blue[i]) : min(red[i], blue[i]);
	cout << au << endl;
}
