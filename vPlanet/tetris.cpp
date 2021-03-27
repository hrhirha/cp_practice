#include <iostream>

using namespace std;

int	main()
{
	int n, m; cin >> n >> m;
	int c[m];
	int a[n];

	for (int i = 1; i <= n; i++) a[i] = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> c[i];
		a[c[i]]++;
	}
	int res = a[1];
	for (int i = 1; i <= n; i++) res = min(res, a[i]);
	if (res > 0) cout << res << "\n";
	else cout << res << "\n";
}
