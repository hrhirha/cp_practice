#include <iostream>
#define LL long long

using namespace std;

// N: number of hamsters
// K: types of boxes
// a[i]: how many hamster can fit in box

int	main(void)
{
	LL N, K; cin >> N >> K;
	LL a[K];
	LL min_i, min_mod, min_res;

	min_mod = 1e18;
	for (LL i = 0; i < K; i++)
	{
		cin >> a[i];
		if (N % a[i] < min_mod)
		{
			min_mod = N % a[i];
			min_i = i + 1;
			min_res = N / a[i];
		}
	}
	cout << min_i << " " << min_res << "\n";
}
