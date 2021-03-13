#include <iostream>

using namespace std;

int	main()
{
	int		Bx, By, Rx, Ry, Lx, Ly;

	for (int i = 0; i < 10; i++)
	{
		string s; cin >> s;
		for (int j = 0; j < 10; j++)
		{
			if (s[j] == 'B') { Bx = j; By = i; }
			if (s[j] == 'R') { Rx = j; Ry = i; }
			if (s[j] == 'L') { Lx = j; Ly = i; }
		}
	}
	int BLx = abs(Lx - Bx);
	int BLy = abs(Ly - By);
	
	int BRx = abs(Rx - Bx);
	int BRy = abs(Ry - By);
	
	int dist = abs(Lx - Bx) + abs(Ly - By) - 1;
	// Check if R is in bitween B and L in the same line
	if ((By == Ry && Ry == Ly && BRx < BLx) ||
		(Bx == Rx && Rx == Lx && BRy < BLy))
		dist += 2;
	cout << dist << "\n";
}
