#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	sum_of_digs(int n)
{
	int sum;

	if (n < 10)
		return (n);
	sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum);
}

int	main(void)
{
	int n; cin >> n;
	vector<int> v;
	int x;

	for (int sum = 1; sum <= 81; sum++)
	{
		x = n - sum;
		if (x + sum_of_digs(x) == n && x > 0)
			v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << "\n";
}
