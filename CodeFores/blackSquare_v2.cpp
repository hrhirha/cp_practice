#include <iostream>

using namespace std;

int	main(void)
{
	int n, m; cin >> n >> m;
	string s[n];
	int min_c, max_c, min_r, max_r;
	int B = 0;
	int	res;
	int size;

	min_c = min_r = max_c = max_r = -1;
	B = 0;
	for (int j = 0; j < n; j++)
	{
		cin >> s[j];
		for (int i = 0; i < m; i++)
		{
			if (s[j][i] == 'B')
			{
				if (min_c == -1)
				{
					min_c = max_c = i;
					min_r = max_r = j;
				}
				else
				{
					min_c = min(min_c, i);
					max_c = max(min_c, i);
					min_r = min(min_r, j);
					max_r = max(min_r, j);
				}
				B++;
			}
		}
	}
	if (min_c == max_c == min_r == max_r && min_c == -1)
		res = 1;
	else if (min_c == max_c == min_r == max_r && min_c != -1)
		res = 0;
	else if (max_c - min_c + 1 > n || max_r - min_r + 1 > m)
		res = -1;
	else
	{
		size = max(max_c - min_c + 1, max_r - min_r + 1);
		res = size * size - B;
	}
	cout << res << "\n";
}
