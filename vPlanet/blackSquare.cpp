#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main(void)
{
	int n, m;
	string s[n];
	vector<int> v;
	int prevB = -1;
	int B;

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> s[i];
	for (int i = 0; i < n; i++)
	{
		B = 0;
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == 'B') B++;
		}
		if (B > n)
		{
			cout << -1 << "\n";
			return (0);
		}
		else if (B > 0) prevB = i;
		v.push_back(B);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << "\n";
}
