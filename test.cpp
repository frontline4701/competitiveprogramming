#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long a, b,c,d;
	cin >> a >> b>>c>>d;

	long long ans;
	long long e ,f;
	e = max(a*c, b * d);
	f = max(b *c, a * d);

	cout << max(e,f) << endl;

}
