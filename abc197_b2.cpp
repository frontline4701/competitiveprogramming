#include <bits/stdc++.h>
#define ll long long int
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int h,w,x,y; cin >> h >> w >> x >> y;

	char tmp;
	vector<vector<char>> d(h+2);
	for(int i = 0; i < h+2; i++){
		for(int j = 0; j < w+2; j++){
			if(i >0 && i < h+1 && j>0 && j<w+1) cin >> tmp;
			else tmp = '0';
			d[i].push_back(tmp);
		}
	}

	int now[2];
	now[0] = x;
	now[1] = y;
	int ans = 1;
	while(d[now[0]++][now[1]] == '.'){
		if(d[now[0]][now[1] == '.']) ans++;
		else break;
	}
	now[0] = x;
	now[1] = y;
	while(d[now[0]--][now[1]] == '.'){
		if(d[now[0]][now[1] == '.']) ans++;
		else break;
	}
	now[0] = x;
	now[1] = y;
	while(d[now[0]][now[1]++] == '.'){
		if(d[now[0]][now[1] == '.']) ans++;
		else break;
	}
	now[0] = x;
	now[1] = y;
	while(d[now[0]][now[1]--] == '.'){
		if(d[now[0]][now[1] == '.']) ans++;
		else break;
	}

	cout << ans - 4<< endl;
}
