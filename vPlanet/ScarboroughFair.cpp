#include <iostream>

using namespace std;

// n: s length
// m: number of operations
// l, r, c1, c2: replace c1 with c2 if found between Index l and r (included)

int	main(void)
{
	int n, m;
	string s;
	int l, r;
	char c1, c2;

	cin >> n >> m;
	cin >> s;
	for (int i = 0; i < m; i++)
	{
		cin >> l >> r >> c1 >> c2;
		for (int j = l - 1; j < r; j++)
		{
			if (s[j] == c1) s[j] = c2;
		}
	}
	cout << s << "\n";
}
