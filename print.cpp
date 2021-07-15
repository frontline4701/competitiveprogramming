#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int factorial(int n) {return n? n * factorial(n - 1):1;}


int main()
{
	long n,k,s;
	cin >> n >> k >> s;
	long c = 1;

	for ( long i = 0; i < k ; i++)
	{
		printf("%ld ", s);
		c++;
	}
	while (c <= n)
	{
		printf("%ld ", s + 1);
		c++;
	}
	
}
