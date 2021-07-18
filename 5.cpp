#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;

	vector<int> d(n, -1);
	vector<int> a(n+1);

	for(int i = 0; i < n; i++){
		cin >> d[i];
		a[i] = d[i];
	}

	sort(d.begin(), d.end(), greater<int>());

	for(int i = 0; i< n ; i++){
		for(int j = 0;j<n;j++){
			if(d[i] == a[j])
			{
				cout << j + 1 << endl;
				continue;
			}
		}
	}

}
