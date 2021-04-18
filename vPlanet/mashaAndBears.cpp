#include <iostream>

using namespace std;

/*
 * v1: size of father bear
 * v2: size of mother bear
 * v3: size of son bear
 * vm: size of masha bear
 */

int	main(void)
{
	int v1, v2, v3, vm;
	int car1, car2, car3;

	cin >> v1 >> v2 >> v3 >> vm;
	car3 = vm > v3 ? vm : v3;
	car2 = v2 > car3 ? v2 : car3 + 1;
	if (2 * vm >= car2) car2 = 2 * vm + 1;
	car1 = v1 > car2 ? v1 : car2 + 1;
	if (2 * vm < car3 || 2 * v3 < car3 || 2 * v2 < car2 || 2 * v1 < car1)
		cout << -1 << "\n";
	else
		cout << car1 << "\n" << car2 << "\n" << car3 << "\n";
}
