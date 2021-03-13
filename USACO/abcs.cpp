#include <iostream>

using namespace std;

int	main()
{
	int	tmp;
	int	arr_num[7];

	for(int i = 0; i < 7 ;i++)
		cin >> arr_num[i];
	for(int i = 0; i < 6; i++)
	{
		for(int j = i; j < 7; j++)
		{
			if (arr_num[i] > arr_num[j])
			{
				tmp = arr_num[i];
				arr_num[i] = arr_num[j];
				arr_num[j] = tmp;
			}
		}
	}
	cout << arr_num[0] << " ";
	cout << arr_num[1] << " ";
	cout << arr_num[6] - (arr_num[0] + arr_num[1]) << "\n";
}
