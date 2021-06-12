#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

#define FOR(i, start, end, inc) for(int i = start; i < end; i += inc)
#define FOREATCH(var, cont) for (auto var : cont)
#define	pb push_back
#define	WRITE(x) cout << x << '\n';
#define	FWRITE(x) fout << x << '\n';
#define	READ(x) cin >> x;
#define	FREAD(x) fin >> x;

using namespace std;

typedef long long		ll;
typedef vector<int>		vi;
typedef vector<ll>		vll;
typedef vector<string>	vs;
typedef pair<int,int>	pii;
typedef vector<pii>		vpii;

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
	setIO("cowsignal");

	// code starts here
	int M, N, K; fin >> M >> N >> K;
	string l;
	vs	ans;

	FOR(i, 0, M, 1)
	{
		int idx(0);
		string str;
		FREAD(l);
		FOR(j, 0, (int)l.size(), 1)
		{
			str.append(K, l[j]);
		}
		while (idx++ < K) ans.pb(str);
	}
	FOREATCH(s,ans) FWRITE(s);
}
