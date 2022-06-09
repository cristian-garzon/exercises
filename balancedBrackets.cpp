#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	stack<char> m;
	cin >> n;
	for(int i = 0; i < n.size(); i++){
		if(m.empty()) m.push(n[i]);
		else if(m.top() == '{' && n[i] == '}' ||
				m.top() == '[' && n[i] == ']' ||
				m.top() == '(' && n[i] == ')') m.pop();
		else m.push(n[i]);
	}
	string result = m.empty() ? "true" : "false";
	cout << result << endl;
}
