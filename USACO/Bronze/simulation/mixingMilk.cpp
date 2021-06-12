#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

#define FOR(i, start, end, inc) for(int i = start; i < end; i += inc)
#define FOREATCH(var, cont) for (auto var : cont)
#define	pb push_back
#define	WRITE(x) cout << x << '\n';
#define	FWRITE(x) fout << x << '\n';

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

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
	setIO("mixmilk");

	// Code starts here
	pii		p;
	vpii	v;
	size_t	idx, idx2, amt;

	FOR(i, 0, 3, 1)
	{
		int a, b; fin >> a >> b;
		p = make_pair(a, b);
		v.pb(p);
	}
	idx = 0;
	FOR(i, 0, 100, 1)
	{
		idx2 = (idx == v.size()-1) ? 0 : idx+1;
		amt = min(v[idx].second, v[idx2].first - v[idx2].second);
		v[idx].second -= amt;
		v[idx2].second += amt;
		if (idx == v.size()-1) idx = 0;
		else idx++;
	}
	FOREATCH(bucket, v) FWRITE(bucket.second);
}
