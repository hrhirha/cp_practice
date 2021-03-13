#include <iostream>
#include <fstream>
using namespace std;

int	main()
{
	int a, b, c, d;

	//freopen("paint.in", "r", stdin);
	//freopen("paint.out", "w", stdout);
	cin >> a >> b;
	cin >> c >> d;
	if (a > c)
	{
		if (a > d)
			cout << b - a + d - c << "\n";
		else
			cout << b - c << "\n";
	}
	else
	{
		if (c > b)
			cout << b - a + d - c << "\n";
		else
			cout << d - a << "\n";
	}
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
