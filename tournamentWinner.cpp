#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	vector<pair<string,string>> competitors;
	map<string,int> results;
	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		competitors.push_back(make_pair(a,b));
	}
	for(int i = 0; i < n; i++){
		cin >> m;
		string winner = m == 1 ? competitors[i].first : competitors[i].second;
		string losser = m == 1 ? competitors[i].second : competitors[i].first;
		if(results.find(winner) == results.end()) results[winner] = 3;
		else results[winner] += 3; 
		if(results.find(losser) == results.end()) results[losser] = 0;
	}
	for(const auto &winner : results){
		cout << winner.first << " - " << winner.second << endl;
	}
}

