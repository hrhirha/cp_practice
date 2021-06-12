#include <iostream>
#include <vector>
#include <array>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;
using ll = long long;
using db = double;

#define pb	push_back
#define f	first
#define s	second
#define mp	make_pair
#define ffo	find_first_of
#define flo	find_last_of

#define	FOR(i, start, end, inc)	for (int i = start; i < end; i += inc)

#define	ari(x)					array<int, x>
#define	ars(x)					array<string, x>
#define	arll(x)					array<ll, x>

typedef	pair<int,int>		pi;
typedef	pair<ll,ll>			pl;
typedef	pair<string,string>	ps;
typedef	vector<int>			vi;
typedef	vector<string>		vs;
typedef	vector<pi>			vpi;
typedef	vector<pl>			vpl;
typedef	vector<ps>			vps;


int	main()
{
	string		name = "circlecross";
	ifstream	cin(name+".in");
	ofstream	cout(name+".out");
	cin.tie(0), cout.sync_with_stdio(0);

	string	str; cin >> str;
	int		ans(0);

	for (int c1 = 'A'; c1 < 'Z'; c1++)
	{
		for (int c2 = c1+1; c2 <= 'Z'; c2++)
		{
			pi	p1, p2;
			p1 = mp(str.ffo(c1), str.flo(c1));
			p2 = mp(str.ffo(c2), str.flo(c2));
			if ((p1.f<p2.f && p1.s>p2.s) || (p2.f<p1.f && p2.s>p1.s)) continue ;
			if (min(p1.s, p2.s) - max(p1.f, p2.f) > 0) ans++;
		}
	}
	// set<char> back_up;
	// for(int i = 0; i < str.size(); ++i)
	// {
	// 	if (back_up.find(str[i]) != back_up.end())
	// 		continue;
	// 	back_up.insert(str[i]);
	// 	for(int j = i + 1; j < str.size(); ++j)
	// 	{
	// 		int index = str.flo(str[i]);
	// 		if (j < index && str.flo(str[j]) > index)
	// 			ans++;
	// 	}
	// }
	cout << ans << '\n';
	return 0;
}
