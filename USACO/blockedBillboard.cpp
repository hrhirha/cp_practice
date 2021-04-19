#include <iostream>

using namespace std;

int	main(void)
{
	int ax1, ay1, ax2, ay2;
	int bx1, by1, bx2, by2;
	int	tx1, ty1, tx2, ty2;
	int x1, y1, x2,y2;
	int	area1,area2;

	cin >> ax1 >> ay1 >> ax2 >> ay2;
	cin >> bx1 >> by1 >> bx2 >> by2;
	cin >> tx1 >> ty1 >> tx2 >> ty2;

	// areas of billboards a and b respectively
	area1 = (ax2 - ax1) * (ay2 - ay1);
	area2 = (bx2 - bx1) * (by2 - by1);

	// intersection between a and th truck
	x1 = max(ax1, tx1);
	y1 = max(ay1, ty1);
	x2 = min(ax2, tx2);
	y2 = min(ay2, ty2);
	area1 -= (x2 - x1) * (y2 - y1);

	// intersection between b and th truck
	x1 = max(bx1, tx1);
	y1 = max(by1, ty1);
	x2 = min(bx2, tx2);
	y2 = min(by2, ty2);

	// the remain_visible area
	area2 -= (x2 - x1) * (y2 - y1);
	
	cout << area1 + area2 << "\n";
}
