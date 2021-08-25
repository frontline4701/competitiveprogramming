#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int A[300009];
int B[300009];

int main(){
	int n,q;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	cin >> q;
	for (int i = 0; i < q; i++) cin >> B[i];

	sort(A, A + n);

	// for(int i = 0; i < n; i++){
	// 	cout << A[i] << " ";
	// }
	// cout << endl;

	for(int i = 0; i < q; i++){
		int pos = lower_bound(A, A + n, B[i]) - A;
		int diff1 = 2000000000, diff2 = 2000000000;
		if(pos <= n) diff1 = abs(B[i] - A[pos]);
		if(pos >= 1) diff2 = abs(B[i] - A[pos - 1]);
		cout << min(diff1, diff2) << endl;
	}
}