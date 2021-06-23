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
	string		name = "f"; // CHANGE IT !!!!!!
	ifstream	cin(name+".in");
	ofstream	cout(name+".out");

	string		str; cin >> str;
	string		sub; cin >> sub;

	// while (1)
	// {
	// 	size_t found = str.find(sub);
	// 	if (found == string::npos) break ;
	// 	string sub2 = str.substr(0, found) + str.substr(found+sub.size());
	// 	str = sub2;
	// }
	cout << str << '\n';
} // TLE
