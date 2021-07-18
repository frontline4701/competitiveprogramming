#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n,s,d; cin >>n>>s>>d;
	int a,b;
	for(int i =0; i < n; i++){
		cin >>a>>b;
		if(a < s && b > d){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No";
}
