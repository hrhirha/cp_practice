#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	int		t; cin >> t;
	int		n;
	string	s;
	char	c;
	vector<string> v;

	for (int i = 0; i < t; i++)
	{
		string ans("YES");
		cin >> n; cin >> s;
		for (int k = 0; k < n; k++)
		{
			int j = k;
			c = s[j++];
			while (s[j] == c && j < n) j++;
			while (s[j] != c && j < n) j++;
			if (s[j] == c)
			{
				ans = "NO";
				break ;
			}
		}
		v.push_back(ans);
	}
	for (string s : v) cout << s << "\n";
}
