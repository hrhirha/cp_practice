#include <iostream>

#define LL long long

using namespace std;

struct	Rect
{
	int x1, y1, x2, y2;
	LL	area()
	{
		if (x2 < x1 || y2 < y1)
			return (0);
		LL area = (LL)(x2 - x1) * (LL)(y2 - y1);
		return (area);
	};
};

Rect	intr(Rect a, Rect b)
{
	Rect i;

	i.x1 = max(a.x1, b.x1);
	i.y1 = max(a.y1, b.y1);
	i.x2 = min(a.x2, b.x2);
	i.y2 = min(a.y2, b.y2);

	return (i);
}

int	main(void)
{
	Rect w, b1, b2;
	string res;
	LL vis_area;
	Rect	w_b1, w_b2, b1_b2;

	cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
	cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
	cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;

	w_b1 = intr(w, b1);
	w_b2 = intr(w, b2);
	b1_b2 = intr(w_b1, w_b2);
	vis_area = w.area() - (w_b1.area() + w_b2.area() - b1_b2.area());
	res = vis_area <= 0 ? "NO" : "YES";
	cout << res << "\n";
}
