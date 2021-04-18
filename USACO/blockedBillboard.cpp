#include <iostream>

using namespace std;

int	main(void)
{
	int b1x1, b1y1, b1x2, b1y2;
	int b2x1, b2y1, b2x2, b2y2;
	int	tx1, ty1, tx2, ty2;
	int x1, y1, x2,y2;
	int	area1,area2;

	cin >> b1x1 >> b1y1 >> b1x2 >> b1y2;
	cin >> b2x1 >> b2y1 >> b2x2 >> b2y2;
	cin >> tx1 >> ty1 >> tx2 >> ty2;
	area1 = (b1x2 - b1x1) * (b1y2 - b1y1);
	area2 = (b2x2 - b2x1) * (b2y2 - b2y1);

	x1 = max(b1x1, tx1);
	y1 = max(b1y1, ty1);
	x2 = min(b1x2, tx2);
	y2 = min(b1y2, ty2);
	area1 -= (x2 - x1) * (y2 - y1);
	
	x1 = max(b2x1, tx1);
	y1 = max(b2y1, ty1);
	x2 = min(b2x2, tx2);
	y2 = min(b2y2, ty2);
	area2 -= (x2 - x1) * (y2 - y1);
	
	cout << area1 + area2 << "\n";
}
