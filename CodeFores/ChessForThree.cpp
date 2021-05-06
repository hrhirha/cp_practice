#include <iostream>

using namespace std;

int	main(void)
{
	int n; cin >> n;
	int a[n];
	int spec = 3;
	string s = "YES";

	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == spec) s = "NO";
		if (a[i] + spec == 3) spec = 3;
		else if (a[i] + spec == 4) spec = 2;
		else if (a[i] + spec == 5) spec = 1;
		//cout << "spec = " << spec << "\n";
	}
	cout << s << "\n";
}
