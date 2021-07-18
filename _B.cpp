#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n; cin >> n;
	vector<vector<int>> d;
	d.resize(n*3);
	for(int i = 0; i < n * 3; i++)
	{
		d[i].resize(2);
	}
	for(int i = 0; i < n * 3; i++){
		cin >> d[i][0];
		if(i / n == 0) d[i][1] = 1;
		if(i / n == 1) d[i][1] = 2;
		if(i / n == 2) d[i][1] = 3;
	}

	sort(d.begin(), d.end());
	for(int j = 0; j < d.size(); j++){
		cout << d[j][0];
	}
	cout << endl;

	int a = 0,b=0,c=0;
	int tmpa,tmpb;
	int count = 0;
	int sz;
	while(true){
		a=-1;
		b=-1;
		c=-1;
		sz = d.size();
		for(int i = 0; i < sz; i++){
			for(int j = 0; j < d.size(); j++){
				cout << d[j][0];
			}
			cout << endl;
			for(int j = 0; j < d.size(); j++){
				cout << d[j][1];
			}
			cout << endl;
			cout << "size : " << sz << endl;
			printf("a:%d,b:%d,c:%d\n",a,b,c);
			if(d[i][1] == 1 && a == -1){
				a = i;
			}
			else if(d[i][1] == 2 && a != -1 && b == -1){
				b = i;
			}
			else if(d[i][1] == 3 && a != -1 && b != -1 && c == -1){
				c = i;
				d.erase(d.begin() + a);
				d.erase(d.begin() + b);
				d.erase(d.begin() + c);
				sz -= 3;
				if(d[a][0] < d[b][0] && d[b][0] < d[c][0]){
					count++;
				}
				break;
			}
			cout << "i is : " << i << endl;
			if(i >= sz) break;
		}
		printf("after loop: a:%d,b:%d,c:%d\n",a,b,c);

		if(c == -1){
			cout << count << endl;
			break;
		}
	}
}
