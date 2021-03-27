#include <iostream>

#define LL long long

using namespace std;

// n: number of groups
// a: number of One-Seater tables
// b: number of Two-Seater tables
// t[i]: groups 1 or 2
// c: number of Two-Seater tables occupied by One
// ppl: number of costumers in all groups

int	main()
{
	LL n, a, b; cin >> n >> a >> b;
	LL t[n];
	LL c = 0;

	LL	ppl = 0;
	for (LL i = 0; i < n; i++)
	{
		cin >> t[i];
		ppl += t[i];

	}
	for (LL i = 0; i < n; i++)
	{
		if (t[i] == 1 && a > 0)
		{
			a--;
			ppl--;
		}
		else if (t[i] == 1 && b > 0)
		{
			b--;
			ppl--;
			c++;
		}
		else if (t[i] == 1 && c > 0)
		{
			c--;
			ppl--;
		}
		else if (t[i] == 2 && b > 0)
		{
			b--;
			ppl -= 2;
		}
	}
	if (ppl < 0)
		ppl = 0;
	cout << ppl << "\n";
}
