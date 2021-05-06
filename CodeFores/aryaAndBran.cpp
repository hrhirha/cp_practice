#include <iostream>

using namespace std;

int	main()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	int i;

	for (i = 1; i <= n; i++) cin >> a[i];
	for (i = 1; i <= n ; i++)
	{
		if (a[i] > 8)
		{
			k -= 8;
			a[i + 1] += a[i] - 8;
		}
		else if (a[i] <= 8) k -= a[i];
		if (k <= 0) break ;
	}
	if (k <= 0)
		cout << i << "\n";
	else
		cout << -1 << "\n";
}
