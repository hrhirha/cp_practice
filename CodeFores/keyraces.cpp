#include <iostream>

using namespace std;

int	main()
{
	int s, v1, v2, t1, t2;

	cin >> s >> v1 >> v2 >> t1 >> t2;
	int score1 = t1 + s * v1 + t1;
	int score2 = t2 + s * v2 + t2;
	if (score1 < score2)
		cout << "First" << "\n";
	else if (score1 > score2)
		cout << "Second" << "\n";
	else
		cout << "Friendship" << "\n";
}
