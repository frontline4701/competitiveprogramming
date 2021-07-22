#include <bits/stdc++.h>
#define ll long long int
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n; cin >> n;
	string str; 
	string tmp;

	vector<string> a;
	vector<string> b;
	for(int i = 0; i < n; i++){
		cin >> str;
		if(str[0] != '!'){
			str = "!"+str;
			a.push_back(str);
		}
		else b.push_back(str);
	}

	for(auto j: a){
		for(auto i :b){
			if(j.compare(i) == 0 ) {
				cout << j
				return 0;
			}
		}
	}

	cout << "satisfiable";

}
