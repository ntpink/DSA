#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	float S = 0, i = 0;
	while(i <= n)
	{
		S = S + (2*i+1)/(2*i+2);
		i++;
	}
	cout << S;
	return 0;
}
