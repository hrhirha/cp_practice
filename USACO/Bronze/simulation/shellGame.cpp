#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

#define FOR(i, start, end, inc) for(int i = start; i < end; i += inc)
#define FOREATCH(var, cont) for (auto var : cont)
#define	PB push_back
#define	WRITE(x) cout << x << '\n';
#define	FWRITE(x) fout << x << '\n';

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

ifstream fin;
ofstream fout;

void setIO(string name = "")
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    if (name != "")
    {
        fin.open(name + ".in");
        fout.open(name + ".out");
    }
}

int	main()
{
	setIO("shell");

	// code starts here

	int N; fin >> N;
	int a, b, g;
	int ans[3]{0,0,0};
	vi v;

	FOR(j, 0, N, 1)
	{
		fin >> a >> b >> g;
		v.PB(a);
		v.PB(b);
		v.PB(g);
	}
	FOR(j, 0, 3, 1)
	{
		int loc[3] = {0, 0, 0};
		loc[j] = 1;
		FOR(i, 0, (int)v.size(), 3)
		{
			swap(loc[v[i]-1], loc[v[i+1]-1]);
			if (loc[v[i+2]-1]) ans[j]++;
		}
	}
	FWRITE(max(ans[0], max(ans[1], ans[2])));
}
