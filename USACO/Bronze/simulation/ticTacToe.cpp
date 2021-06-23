#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <set>
#include <tuple>
#include <utility>
#include <cmath>

using namespace std;
using ll = long long;
using db = double;

#define pb	push_back
#define f	first
#define s	second
#define mp	make_pair
#define mt	make_tuple

#define	FOR(i, start, end, inc)     for (int i = start; i < end; i += inc)
#define	RFOR(i, start, end, dec)    for (int i = start; i >= end; i -= dec)

#define bg(x)	x.begin()
#define end(x)	x.end()
#define all(x)	bg(x), end(x)

#define	ari(x)				array<int, x>
#define	ars(x)				array<string, x>
#define	arll(x)				array<ll, x>

typedef	pair<int,int>		pi;
typedef	pair<ll,ll>			pl;
typedef	pair<string,string>	ps;

typedef	vector<int>			vi;
typedef	vector<pi>			vpi;
typedef	vector<pl>			vpl;
typedef	vector<ps>			vps;


int	main()
{
	cin.tie(0), cout.sync_with_stdio(0);
	string		name = "tttt";
	ifstream	cin(name+".in");
	ofstream	cout(name+".out");

	char		g[3][3];
	vi			ans{0,0,0};
	set<char>	st1;
	set<char>	st2;

	FOR(i,0,3,1)
	{
		FOR(j,0,3,1) cin >> g[i][j];
	}
	FOR(i,0,3,1)
	{
		FOR(j,0,3,1)
		{
			st1.insert(g[i][j]);
			st2.insert(g[j][i]);
		}
		ans[st1.size()-1]++;
		ans[st2.size()-1]++;
		st1.clear(), st2.clear();
	}
	st1.insert(g[0][0]), st1.insert(g[1][1]), st1.insert(g[2][2]);
	st2.insert(g[0][2]), st2.insert(g[1][1]), st2.insert(g[2][0]);
	ans[st1.size()-1]++;
	ans[st2.size()-1]++;
	cout << ans[0] << '\n' << ans[1] << '\n';
} // WA 2,3,4,5,10
