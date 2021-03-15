#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main()
{
	int h, m, s, t1, t2;
	double dh, dm, ds;
	string res;
	vector<double> v;
	vector<double>::iterator it, it2;

	res = "NO";
	cin >> h >> m >> s >> t1 >> t2;
	dm = (double)m / 5;
	ds = (double)s / 5;
	dh = (double)h + dm / 60 + ds / 60;
	v.push_back(t1);
	v.push_back(t2);
	v.push_back(dh);
	v.push_back(dm);
	v.push_back(ds);
	sort(v.begin(), v.end());
	it = v.begin();
	it2 = v.end() - 1;
	if ((*it == t1 && *it2 == t2) || (*it == t2 && *it2 == t1))
		res = "YES";
	if ((t1 == ds || t1 == dm || t1 == dh || t2 == ds || t2 == dm || t2 == dh) && t1 > t2)
		res = "NO";
	for (it = v.begin(); it != v.end(); it++)
	{
		it2 = it + 1;
		if ((*it == t1 && *it2 == t2) || (*it == t2 && *it2 == t1))
		{
			res = "YES";
		}
		cout << *it << "\n";
	}
	cout << res << "\n";
}
