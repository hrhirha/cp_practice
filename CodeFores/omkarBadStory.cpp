#include <iostream>
#include <vector>
#include <array>
#include <fstream>
#include <cmath>

using namespace std;

#define pb		push_back
#define f		first
#define s		second
#define mp		make_pair
#define	FOR(i, start, end, inc)	for (int i = start; i < end; i += inc)

typedef	vector<int>		vi;
typedef	pair<int,int>	pii;
typedef	vector<pii>		vpii;

bool	inVec(int val, vi v)
{
	for (auto d : v)
	{
		if (d == val) return (true);
	}
	return (false);
}

int	main()
{
	int t; cin >> t;
	vector<pair<string, vi>>	ans;
	string						s;
	while (t--)
	{
		int	n; cin >> n;
		vi	a;
		FOR(i, 0, n, 1)
		{
			int k; cin >> k;
			a.pb(k);
		}
		s = "YES";
		FOR(i, 0, (int)a.size()-1, 1)
		{
			FOR(j, i+1, (int)a.size(), 1)
			{
				if (!inVec(abs(a[i] - a[j]), a))
				{
					if (a.size() == 300)
					{
						s = "NO";
						break ;
					}
					a.pb(abs(a[i] - a[j]));
					i = -1;
					break ;
				}
			}
		}
		pair<string, vi> ans_pair = mp(s, a);
		ans.pb(ans_pair);
	}
	for (auto p : ans)
	{
		if (p.f == "NO") cout << p.f << '\n';
		else
		{
			cout << p.f << '\n';
			cout << p.s.size() << '\n';
			for (auto i : p.s) cout << i << " ";
			cout << '\n';
		}
	}
} // TLE on Test #31
