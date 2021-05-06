#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	int			t; cin >> t;
	int			n;
	vector<int>	v;
	int			ans(0);

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if (n < 10) ans = n;
		else
		{
			while (n > 0)
			{
				ans += 9;
				n /= 10;
			}
		}
		v.push_back(ans);
	}
	for (int i : v) cout << i << "\n";
}
