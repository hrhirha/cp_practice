#include <iostream>

using namespace std;

int	main()
{
	long long	n;
	string		s;
	int			u = 0, r = 0;
	int			coin = 0;

	cin >> n >> s;
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == 'U')
			u++;
		else
			r++;
		if (u == r && s[i + 1] == s[i])
			coin++;
	}
	cout << coin << "\n";
}
