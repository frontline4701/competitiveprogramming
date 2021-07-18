#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> data(n);
	int sum =0;
	int num;

	for (int i = 0; i < n; i++){
		cin >> num;
		if (num > 10) sum = sum + num - 10;
	}

	cout << sum;
}
