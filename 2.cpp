#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;

	vector<int> d(n);

	for(int i = 0; i < n; i++)
	{
		cin >> d[i];
	}
	d.resize(n+m);
	for(int i = 0; i < m; i++)
	{
		cin >> d[n + i];
	}

	sort(d.begin(), d.end());

	for(int i = 0; i < n + m; i++)
	{
		if(d[i] != d[i+ 1]) cout << d[i] << " ";
		else i++;
	}

}
