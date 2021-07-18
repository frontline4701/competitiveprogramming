#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n; cin >> n;
	int a[n][2];
	for(int i = 0; i < n; i++){
		cin >> a[i][0] >> a[i][1];
	}
	int ma=100000, mb=1000000;
	int xma=100000, xmb=1000000;

	int c,d;
	for(int i = 0; i < n; i++){
		if(ma > a[i][0]){
			xma = ma;
			ma = a[i][0];
			c = i;
		}
		if(mb > a[i][1]){
			xmb = mb;
			mb = a[i][1];
			d = i;
		}
	}

	if(c != d){
		cout << max(ma, mb);
		return 0;
	}
	int ans;
	if(c == d){
		ans = (ma + mb);
		if((ma + mb) > max(xma,mb)) ans = max(xma,mb);
		if(ans > max(xmb,ma)) ans = max(xmb,ma);
	}
	cout << ans;
}
