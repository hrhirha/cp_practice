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
	cin.tie(0), cout.sync_with_stdio(0);
	string		name = "cownomics";
	ifstream	fin(name+".in");
	ofstream	fout(name+".out");

	int			n, m; fin >> n >> m;
	vs			spot(n), pla(n);
	int			i, j;
	int			ans(0);

	for (auto &s : spot) fin >> s;
	for (auto &s : pla) fin >> s;

	FOR(k,0,m,1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (spot[i][k] == pla[j][k]) break ;
			}
			if (j != n) break ;
		}
		if (i == n && j == n) ans++;
	}
	fout << ans << '\n';
}
