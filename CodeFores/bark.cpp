#include <iostream>

using namespace std;

int	main()
{
	string	pass;
	int		i, n;
	string	res = "NO";

	cin >> pass >> n;
	string ws[n], str;
	for (i = 0; i < n; i++)
	{
		cin >> ws[i];
		if (pass == ws[i])
		{
			cout << "YES" << "\n";
			return (0);
		}
		str += ws[i];
	}
	for (i = 0; str[i]; i += 2)
	{
		if (pass[1] == str[i]) break ;
	}
	if (i < str.length())
	{
		for (i = 1; str[i]; i += 2)
		{
			if (pass[0] == str[i]) break ;
		}
		if (i < str.length())
			res = "YES";
	}
	cout << res << "\n";
}
