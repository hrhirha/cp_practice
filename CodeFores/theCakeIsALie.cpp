#include <iostream>
#include <vector>

using	namespace std;

int	main(void)
{
	int t, n, m, k;
	cin >> t;
	vector<string> v;
	string ans;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m >> k;
		ans = (n * m - 1) == k ? "YES" : "NO";
		v.push_back(ans);
	}
	for (auto i : v) cout << i << "\n";
}
