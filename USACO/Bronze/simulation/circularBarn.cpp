#include <iostream>
#include <vector>
#include <array>
#include <fstream>
#include <cmath>

using namespace std;
using ll = long long;
using db = double;

#define pb	push_back
#define f	first
#define s	second
#define mp	make_pair

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
	string		name = "cbarn";
	ifstream	cin(name+".in");
	ofstream	cout(name+".out");

	int n; cin >> n;
	vi	v(n); for (auto &el : v) cin >> el;
	int	ans(numeric_limits<int>::max());

	FOR(i,0,n,1)
	{
		int	steps(0);
		int j = (i+1 == n) ? 0 : i+1;
		int	sub(n-1);
		while (j != i)
		{
			steps += v[j] * (n-sub);
			++j%=n;
			sub--;
		}
		ans = min(ans, steps);
	}
	cout << ans << '\n';
}