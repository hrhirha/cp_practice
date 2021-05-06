#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main(void)
{
	vector<int> v;
	int n;
	int av_score = 0;
	int score;

	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		v.push_back(n);
		av_score += n;
	}
	av_score /= 2;
	for (vector<int>::iterator i1 = v.begin(); i1 != v.end() - 2; i1++)
	{
		for (vector<int>::iterator i2 = i1 + 1; i2 != v.end() - 1; i2++)
		{
			for (vector<int>::iterator i3 = i2 + 1; i3 != v.end(); i3++)
			{
				if (*i1 + *i2 + *i3 == av_score)
				{
					score = 0;
					for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
					{
						score += (i != i1 && i != i2 && i != i3) ? *i : 0;
					}
					if (score == av_score)
					{
						cout << "YES" << "\n";
						exit (0);
					}
				}
			}
		}
	}
	cout << "NO" << "\n";
}
