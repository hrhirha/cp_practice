#include <iostream>

using namespace std;

int	main()
{
	int n;
	cin >> n;
	int f[n];
	string res = "NO";

	for (int i = 1; i <= n; i++) cin >> f[i];
	for (int i = 1; i <= n; i++)
	{
		int x = f[i];
		int y = f[x];
		int z = f[y];
		if (z == i) res = "YES";
	}
	cout << res << "\n";
}
