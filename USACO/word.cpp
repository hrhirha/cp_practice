#include <iostream>

using namespace std;

int	main()
{
	// N: number of words, K: number of chars per line
	int		N, K, len = 0;
	string	essay[10];

	cin >> N >> K;
	for(int i = 0; i < 10;i++)
		cin >> essay[i];
	cout << essay[0];
	len = essay[0].length();
	for (int i = 1; i < 10;i++)
	{
		len += essay[i].length();
		if (len <= K)
			cout << " " << essay[i];
		else
		{
			cout << "\n" << essay[i];
			len = essay[i].length();
		}
	}
	cout << "\n";
}
