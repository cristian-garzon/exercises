#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	char p = ' ';
	int au;
	map<char, int> m;
	cin >> n;
	for(int i = 0; i < n.size(); i++){
		cout << n[i] << endl;
		if(m.find(n[i]) ==  m.end()) m[n[i]] = 0;		
		else m[n[i]] ++;
	}
	for(const auto &i : m){
		cout << i.first << " - " << i.second << endl;
		/*
		if(i.second == 0){
			p = i.first;
			break;
		}
		*/
	}
	if(p == ' ') cout << "all char repeats" << endl;
	else {
		for(int i = 0; i < n.size(); i++){
			if(p == n[i]){
				au = i;
				break;
			}
		}
		cout << au << endl;
	}
}
