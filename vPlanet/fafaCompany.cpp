#include <iostream>

using namespace std;

int	main()
{
	int n; cin >> n;
	int res;

	res = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if ((n - i) % i == 0)
			res++;
	}
	cout << res << "\n";
}
