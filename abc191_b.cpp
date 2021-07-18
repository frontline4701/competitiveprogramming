#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n,x;
	cin >> n >> x;
	vector<int> d;
	int k;
	for(int i = 0; i < n; i++){
		cin >> k;
		if(k != x) d.push_back(k);
	}
	for(int i =0; i < d.size(); i++){
		cout << d[i] << " ";
	}
}
