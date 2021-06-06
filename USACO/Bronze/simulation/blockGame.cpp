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
#define ffo		find_first_of
#define	FOR(i, start, end, inc)	for (int i = start; i < end; i += inc)

#define ari(x)		array<int, x>

typedef	vector<int>			vi;
typedef	pair<int,int>		pii;
typedef	pair<string,string>	pss;
typedef	vector<pii>			vpii;
typedef	vector<pss>			vpss;

int	main()
{
	string		name = "blocks";
	ifstream	fin(name+".in");
	ofstream	fout(name+".out");

	int			N; fin >> N;
	pss			c;
	vpss		cs;
	ari(26)		al;
	ari(26)		al1;
	ari(26)		al2;

	al.fill(0);
	FOR(i, 0, N, 1)
	{
		string a, b; fin >> a >> b;
		c = mp(a, b);
		cs.pb(c);
	}
	FOR(i, 0, (int)cs.size(), 1)
	{
		al1.fill(0);
		al2.fill(0);
		FOR(j, 0, (int)cs[i].f.size(), 1) al1[cs[i].f[j]-'a']++;
		FOR(j, 0, (int)cs[i].s.size(), 1) al2[cs[i].s[j]-'a']++;
		FOR(j, 0, 26, 1) al[j] += max(al1[j], al2[j]);
	}
	FOR(i, 0, 26, 1) fout << al[i] << '\n';
}
