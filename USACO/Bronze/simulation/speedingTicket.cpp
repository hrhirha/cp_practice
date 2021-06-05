#include <iostream>
#include <vector>
#include <fstream>

#define pb	push_back
#define f	first
#define s	second
#define mp	make_pair

using namespace std;

typedef	vector<int>		vi;
typedef	pair<int,int>	pii;
typedef	vector<pii>		vpii;


int	main()
{
	string		name = "speeding";
	ifstream	fin(name+".in");
	ofstream	fout(name+".out");

	int N, M; fin >> N >> M;
	pii	p;
	vpii vN, vM;
	int i, j;
	int ans(0);

	for (i = 0; i < N; i++)
	{
		int a,b; fin >> a >> b;
		p = mp(a, b);
		vN.pb(p);
	}
	for (i = 0; i < M; i++)
	{
		int a,b; fin >> a >> b;
		p = mp(a, b);
		vM.pb(p);
	}
	i = j = 0;
	while (i < N || j < M)
	{
		ans = max(ans, vM[j].s - vN[i].s);
		if (vN[i].f == vM[j].f)
		{
			i++; j++;
		}
		else if (vN[i].f > vM[j].f)
		{
			vN[i].f -= vM[j].f;
			j++;
		}
		else
		{
			vM[j].f -= vN[i].f;
			i++;
		}
	}
	fout << ans << '\n';
}
