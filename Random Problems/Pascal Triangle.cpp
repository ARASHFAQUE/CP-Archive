#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define Allahu_Akbar ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define nline "\n"
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define ll long long int
#define get_lost return 0

void FYM()
{
	Allahu_Akbar;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}


int main() {
	FYM();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll arr[n][n];
		arr[0][0] = 1;
		for (int i = 1; i < n; ++i)
		{
			arr[i][0] = 1;
			arr[i][i] = 1;
			for (int j = 1; j < i; ++j)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				cout << arr[i][j] << " ";
			}
			cout << nline;
		}
	}
}
