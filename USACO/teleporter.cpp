#include <iostream>
#include <cmath>
using namespace std;

int	main()
{
	int a, b, x, y;
	
	cin >> a >> b >> x >> y;
	int dist = abs(a - b);
	int t1 = abs(a - x) + abs(b - y);
	int t2 = abs(a - y) + abs(b - x); // missed
	dist = min(dist, t1);
	dist = min(dist, t2);
	cout << dist << "\n";
}
