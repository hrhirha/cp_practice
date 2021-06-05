#include <iostream>

using namespace std;

struct	Rect
{
	int x1, y1, x2, y2;
};


int	main(void)
{
	Rect a, b, c;
	int side;

	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

	// Rectangle contaning a and b
	c.x1 = min(a.x1, b.x1);
	c.y1 = min(a.y1, b.y1);
	c.x2 = max(a.x2, b.x2);
	c.y2 = max(a.y2, b.y2);

	// side of the Square pasture
	side = max(c.y2 - c.y1, c.x2 - c.x1);

	cout << side * side << "\n";
}
