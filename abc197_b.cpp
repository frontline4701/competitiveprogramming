#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h,w, x,y; cin >> h>>w>>x>>y;
	x = x - 1;
	y = y - 1;
	char mp[h][w];
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < w; j++){
			cin >> mp[i][j];
		}
	}

	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < w; j++){
			cout << mp[i][j];
		}
		cout << endl;
	}
	//up
	int cnt = 1;
	int a = x, b = y;

	while (true){
		b--;
		if(mp[b][a] != '#'){
			if(a < h && b < w && a > -1 && b > -1)cnt++;
		}
		else break;
	}
	a = x; b = y;
	while (true){
		b++;
		if(mp[b][a] != '#'){
			if(a < h && b < w && a > -1 && b > -1)cnt++;
		}
		else break;
	}
	a = x; b = y;
	while (true){
		a--;
		if(mp[b][a] != '#'){
			if(a < h && b < w && a > -1 && b > -1)cnt++;
		}
		else break;
	}
	a = x; b = y;
	while (true){
		a++;
		if(mp[b][a] != '#'){
			if(a < h && b < w && a > -1 && b > -1)cnt++;
		}
		else break;
	}
	cout << cnt << endl;
}
