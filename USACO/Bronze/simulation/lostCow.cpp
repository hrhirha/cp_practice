#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>

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
	string		name = "lostcow";
	ifstream	fin(name+".in");
	ofstream	fout(name+".out");
	int ans(0);

	int x, y; fin >> x >> y;
	int nx;
	for (int i = 1; ; i*=2)
	{
		nx = x + i;
		if (y - x <= nx - x && y > x || x - y <= x - nx && y < x)
		{
			ans += abs(i) + abs(i)/2 - abs(nx - y);
			break ;
		}
		ans += abs(i) + abs(i)/2;
		i*= -1;
	}
	fout << ans << '\n';
}
