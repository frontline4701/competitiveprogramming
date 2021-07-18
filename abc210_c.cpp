#include <bits/stdc++.h>

using namespace std;

long long types(vector<long> c, long k){
	int count = 0;
	for(int i = 0; i < k; i++){
		while(i < k - 1 && c[i] == c[i + 1]){
			i++;
		}
		count++;
	}
	return count;
}

void get_type(vector<long> d, long k, long long max_type, long n){
	long long count = 0;
	while(max_type > 0){
		for(int i = 0; i < n-k+1; i++){
			count = 0;
			for(int j =0; j < k; j++){
				if(d[j] == d[j + 1]) continue;
				count++;
			}
		}
		if(count == max_type){
			cout << max_type;
			return;
		}
		else{
			max_type--;
		}
	}
}

int main()
{
	long n, k;
	scanf("%ld", &n);
	scanf("%ld", &k);
	vector<long> c(n);
	vector<long> d(n);

	long long max_type = 0;
	for(int i =0; i< n; i++){
		scanf("%ld",&c[i]);
		d[i] =c[i];
	}

	sort(c.begin(), c.end());
	for(int i = 0; i < n;i++){
		while(c[i] == c[i+1]){
			i++;
		}
		max_type++;
	}
	cout << max_type << endl;

	get_type(d, k, max_type,n);

	return 0;
}
