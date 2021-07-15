#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	//get input
	int N,Q; cin >> N >> Q;
	//create 2d vector
	vector<vector<int>> G(N);
	//what is this
	for(int i = 0; i < N - 1; i++)
	{
		int A, B; cin >> A >> B;
		G[A - 1].push_back(B-1);
		G[B - 1].push_back(A-1);
	}
	// 2 3とかだったら街２と３が結ばれている


	for ( int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			cout << i << j << " : ";
			cout << G[i][j] << endl;
		}
		cout << endl;
	}
}
