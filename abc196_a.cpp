#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b; cin >> a >> b;
	int c,d; cin >> c >> d;

	int k[] = {a, b};
	int l[] = {c, d};

	int m = a - c;
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			if(m < k[i] - l[j]) m = k[i] - l[j];
		}
	}

	cout << m;
}
