#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
	char str[50];
	char res[50];
	cin >> str;

	int len = strlen(str);
	if(len > 9 ) 
	{
		cout << "NO" << endl;
		return 0;
	}
	int j = 0;
	for (int i = 0; i < 50; i++){
		if(j == 0 || j == 4 || j == 6 || j == 8){
			if(str[j] == 'A') continue;
			else {
				res[j] = 'A';
				j++;
			}
		}
		else {
			if(str[j] == 'A'){
				cout << "NO" << endl;
				return 0;
			}
		}
		res[j] = str[i];
		j++;
		if(str[i] == '\0') break;
	}

	char key[] = "AKIHABARA";
	if(strcmp(res, key) == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}
