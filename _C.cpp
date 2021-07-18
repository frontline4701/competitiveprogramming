#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d[10][4] = {
		{0,0,0,0},
		{1,1,1,1},
		{2,4,8,6},
		{3,9,7,1},
		{4,6,4,6},
		{5,5,5,5},
		{6,6,6,6},
		{7,9,3,1},
		{8,4,2,6},
		{9,1,9,1}
	};

	long long a,b,c; cin >>a >> b>>c;
	int k = a % 10;
	long long l;

	if(b%4 == 0) l = 0;
	else l = b%4;

	cout << l << endl;
	if(l == 1){
		if(b == 1){
			if(c %4 == 0) l = 3;
			else l = c % 4 - 1;
		}
		else l = 0;
	}
	else if(l == 2){
		if(c == 1){
			l = 1;
		}
		else l = 3;
	}
	else if(l == 3){
		if(c%2 == 0) l = 0;
		else l = 1;
	}
	else if(l == 0){
		l = 3;
	}

	cout << l << endl;
	cout << d[k][l];

}
