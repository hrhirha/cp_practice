#include <iostream>

using namespace std;

int	main(void)
{
	string s; cin >> s;
	int res = 0;

	for (int i = 0; s[i]; i++)
	{
		if (s[i] == 'Q')
		{
			for (int j = i + 1; s[j]; j++)
			{
				if (s[j] == 'A')
				{
					for (int k = j + 1; s[k]; k++)
					{
						if (s[k] == 'Q') res++;
					}
				}
			}
		}
	}
	cout << res << "\n";
}
