#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;

	int a,b;

	a = n / 100;
	b = n % 100;

	if(b == 0) cout << a;
	else cout << a + 1;
}
