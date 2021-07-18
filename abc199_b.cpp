#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}

	int bmin = 0;
	int amax = 0;
	for (int i = 0; i < n; i++)
	{
		if(bmin > b[i]) bmin = b[i];
		if(amax < a[i]) amax = a[i];
	}

	cout << bmin << " : " << amax << endl;
	cout << max(0, bmin - amax + 1);
}
