#include <iostream>

using namespace std;

int	main(void)
{
	int n;
	int c;
	int res = 0;

	cin >> n;
	for (int a = 1; a < n; a++)
	{
		for (int b = a + 1; b <= n; b++)
		{
			c = a xor b;
			if (c >= b && a + b > c && c <= n)
			{
				res++;
				//cout << "(" << a << ", " << b << ", " << c << ")\n";
			}
		}
	}
	cout << res << "\n";
}
