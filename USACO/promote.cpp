#include <iostream>
using namespace std;

int	main()
{
	int br[2], sl[2], gl[2], pl[2];
	
	cin >> br[0] >> br[1];
	cin >> sl[0] >> sl[1];
	cin >> gl[0] >> gl[1];
	cin >> pl[0] >> pl[1];
	gl[1] += pl[1] - pl[0];
	sl[1] += gl[1] - gl[0];

	cout << sl[1] - sl[0] << "\n";
	cout << gl[1] - gl[0] << "\n";
	cout << pl[1] - pl[0] << "\n";
}
