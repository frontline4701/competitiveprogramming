#include <bits/stdc++.h>
#include <math.h>

using namespace std;


int main()
{
	int n,k; cin >> n >> k;

	unsigned long long int t = 1;
	for(int i = 1; i <= 100; i++){
		t = t * 10;
	}
	cout << "t:" << t;
	unsigned long long int g[t][t];
	for(unsigned long long int i = 0; i < t; i++){
		for (unsigned long long int j = 0; j <t; j++){
			g[i][j] = -1;
		}
	}

	int a, b;
	for (int i = 0; i < n; i++){
		cin >> a >>b;
		for(unsigned long long int j = 0; j < t; j++){
			if(g[a][j] != -1) continue;
			g[a][j] = b;
			break;
		}
	}

	int cash = k;
	int num = 0;
	while(cash > 0){
		int i = 0;
		num++;
		cash--;
		while(g[num][i] != -1){
			cout << g[num][i] << endl;
			cash = cash + g[num][i];
			i++;
		}
	}
	cout << num << endl;
}
