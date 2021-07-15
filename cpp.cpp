#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;
	long long ans = 1;
	vector<int> data(n);

	for(int i = 0; i < n; i++)
	{
		cin >> data[i];
	}
	sort(data.begin(), data.end());

	for(int i = 0; i < n; i++)
	{
		ans = ans * max(0, data[i] - i) % 1000000007;
	}

	cout << ans << endl;
}
