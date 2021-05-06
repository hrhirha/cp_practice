#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int	main()
{
	ifstream ifs("teleport.in");
	ofstream ofs("teleport.out");
	int a, b, x, y;
	
	ifs >> a >> b >> x >> y;
	int dist = abs(a - b);
	int t1 = abs(a - x) + abs(b - y);
	int t2 = abs(a - y) + abs(b - x); // missed
	dist = min(dist, t1);
	dist = min(dist, t2);
	ofs << dist << "\n";
	ifs.close();
	ofs.close();
}
