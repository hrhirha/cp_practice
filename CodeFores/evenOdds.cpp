#include <iostream>
#include <vector>

#define LL long long

using namespace std;

int	main(void)
{
	LL n, k; cin >> n >> k;
	LL mid = n % 2 == 0 ? n /2 : n/2 + 1;
	LL res;

	if (k <= mid)
	{
		res = 2 * k - 1;
	}
	else res = 2 * (k - mid);
	cout << res << "\n";
}
