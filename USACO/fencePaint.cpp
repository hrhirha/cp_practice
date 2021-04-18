#include <iostream>

using namespace std;

int	main()
{
	int a, b, c, d;
	int x, y;
	int res;

	cin >> a >> b;
	cin >> c >> d;
	res = b - a + d - c;
	if (a > b || c > b)
	{
		cout << res << "\n";
		return (0);
	}
	x = max(a, c);
	y = min(b, d);
	cout << res - (y - x) << "\n";
}

// Solution
/*
int main() {

	freopen("paint.in","r",stdin);

	// reuse standard in to read from "paint.in"

	freopen("paint.out","w",stdout);

	// reuse standard out to write to "paint.out"

	vector<bool> cover(100);

	int a, b, c, d; cin >> a >> b >> c >> d;

	for (int i = a; i < b; ++i) cover[i] = 1;

	for (int i = c; i < d; ++i) cover[i] = 1;

	int ans = 0;

	for (int i = 0; i < 100; ++i) ans += cover[i];

	cout << ans;

}*/
