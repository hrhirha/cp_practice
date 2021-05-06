#include <iostream>

using namespace std;

int	main(void)
{
	int n; cin >> n;
	string s; cin >> s;
	int s2f = 0, f2s = 0;

	for (int i = 0; s[i]; i++)
	{
		if (s[i] == 'F' && s[i + 1] == 'S') f2s++;
		else if (s[i] == 'S' && s[i + 1] == 'F') s2f++;
	}
	if (s2f > f2s)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}
