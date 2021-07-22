#include <bits/stdc++.h>
#define ll long long int
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n; cin >> n;
	int tmpa,tmpb;
	vector<vector<int>> d(n);
	for(int i = 0; i < n; i++){
		cin >> tmpa >> tmpb;
		d[i].push_back(tmpa);
		d[i].push_back(tmpb);
	}
	

	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1;j < n; j++){
			if((double)(d[i][1] - d[j][1]) / (d[i][0] - d[j][0]) <= 1  && (double)(d[i][1] - d[j][1]) / (d[i][0] - d[j][0]) >= -1){
				ans++;
			}
		}
	}

	cout << ans;
}
