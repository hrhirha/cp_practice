#include <iostream>

using namespace std;

struct	Rect
{
	int x1, y1, x2, y2;
	int area() {return ((y2 - y1) * (x2 - x1));};
};

int	main(void)
{
	Rect a, b, i;
	int res;

	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

	// intersection
	i.x1 = max(a.x1, b.x1);
	i.y1 = max(a.y1, b.y1);
	i.x2 = min(a.x2, b.x2);
	i.y2 = min(a.y2, b.y2);

	if ((a.x1 == i.x1 && a.x2 == i.x2 && (a.y1 == i.y1 || a.y2 == i.y2))
		|| (a.y1 == i.y1 && a.y2 == i.y2 && (a.x1 == i.x1 || a.x2 == i.x2)))
		res = a.area() - i.area();
	else res = a.area();

	cout << res << "\n";
}
