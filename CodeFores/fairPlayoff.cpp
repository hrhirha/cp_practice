#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	main()
{
	int t; cin >> t;
	int				s1, s2, s3, s4;
	vector<string>	ans;

	for (int i = 0; i < t; i++)
	{
		cin >> s1 >> s2 >> s3 >> s4;
		if (max(s1,s2) < min(s3,s4) || max(s3,s4) < min(s1,s2))
			ans.push_back("NO");
		else ans.push_back("YES");
	}
	for (auto s : ans) cout << s << '\n';
}
