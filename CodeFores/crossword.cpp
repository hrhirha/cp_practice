#include <iostream>
#include <vector>

using namespace std;

// n, m: lenght of s and t respectively

int	main(void)
{
	int n, m;
	string s, t;
	vector<int> v;
	int min_sym = 1e3 + 1, sym;

	cin >> n >> m >> s >> t;
	if (s == t)
	{
		cout << 0 << "\n\n";
		return (0);
	}
	for (int i = 0; i <= m - n; i++)
	{
		sym = 0;
		for (int j = 0; s[j]; j++)
		{
			if (t[i + j] != s[j]) sym++;
		}
		if (sym < min_sym)
		{
			v.clear();
			min_sym = sym;
			for (int k = 0; k < n; k++)
			{
				if (s[k] != t[i + k]) v.push_back(k + 1);
			}
		}
	}
	cout << min_sym << "\n";
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << "\n";
}
