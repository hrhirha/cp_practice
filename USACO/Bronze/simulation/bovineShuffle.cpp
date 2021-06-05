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


int	main()
{
	string		name = "shuffle";
	ifstream	fin(name+".in");
	ofstream	fout(name+".out");

	int		N ; fin >> N;
	int		a[N];
	int		ans[N];
	int		ans1[N];
	
	FOR(i, 0, N, 1) fin >> a[i];
	FOR(i, 0, N, 1) fin >> ans[i];
	FOR(i, 0, 3, 1)
	{
		FOR(j, 0, N, 1) ans1[j] = ans[a[j]-1];
		FOR(j, 0, N, 1)
		{
			ans[j] = ans1[j];
			ans1[j] = 0;
		}
	}
	for (auto var : ans) fout << var << '\n';
}
