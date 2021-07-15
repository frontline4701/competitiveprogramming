#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp;

	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	sort(arr.begin(), arr.end());

	int flag;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == arr[i+1])
		{
			cout << "No";
			return 0;
		}
		flag = 1;
	}
	if(flag == 1)
		cout << "Yes";

}
