#include <iostream>

#define LL unsigned long long

using namespace std;

LL	factorial_div(LL a, LL b)
{
	LL ret;

	if (a == b || b == 0)
		return (1);
	ret = b > 10 ? b % 10 : b;
	if (a == 0)
	{
		while (--b)
		{
			 ret *= b > 10 ? b % 10 : b;
			if (ret == 0) break ;
		}
	}
	else
	{
		while (--b > a)
		{
			ret *= b > 10 ? b % 10 : b;
			if (ret == 0) break ;
		}
	}
	return (ret);
}

int	main(void)
{
	LL a, b;
	LL div;
	cin >> a >> b;
	div = factorial_div(a, b);
	if (div < 10)
		cout << div << "\n";
	else
		cout << div % 10 << "\n";
}
