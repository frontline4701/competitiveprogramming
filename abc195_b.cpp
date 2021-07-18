#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(j,i,n) for(int i = j; i < (int)(n); i++)

int main(){
	double a,b,w; cin >> a >> b >> w;
	double g = w * 1000;
	double x;
	vector<int> k;
	for (ll i = 1; i <= 1000000; i++){
		x = (double)g / i;
		if(x >= a && x <= b){
			k.push_back(i);
		}
	}
	sort(k.begin(), k.end());

	if(!k.empty()) cout << k[0] << " " << k[k.size() - 1];
	else cout << "UNSATISFIABLE" << endl;
}
