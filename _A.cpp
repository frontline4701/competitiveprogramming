#include <bits/stdc++.h>
#define ll long long int
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	string a, b; cin >> a >> b;

	int k=0;
	int l=0;
	for(int i = 0; i < 3; i++){
		l += a[i] - '0';
		k += b[i] - '0';
	}

	cout << max(k, l) << endl;

}
