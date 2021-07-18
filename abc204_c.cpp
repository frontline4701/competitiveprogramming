#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> G;
bool temp[2000];

void dfs(int v){
	if(temp[v]) return;
	temp[v] = true;
	for(auto x: G[v]) dfs(x);
}

int main(){
	int N, M; cin >> N >> M;
	int ans = 0;

	G.resize(N);

	int a, b;
	for (int i = 0; i < M; i++){
		cin >> a >> b;
		G[a-1].push_back(b-1);
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++) temp[j] = false;
		dfs(i);
		for(int j = 0; j < N; j++) if(temp[j]) ans++;
	}

	cout << ans;
}
