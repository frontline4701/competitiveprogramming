#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	string str;
	int h;
	int max1=0, max2=0;
	string name1, name2;
	for (int i = 0; i < n; i++){
		cin >> str >> h;
		if(max2 < h){
			if(max1 < h)
			{
				name2 = name1;
				name1 = str;
				max2 = max1;
				max1 = h;
			}
			if(max1 > h) {
				name2 = str;
				max2 = h;
			}
		}
	}

	cout << name2;
}
