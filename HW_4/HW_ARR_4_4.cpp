#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

int main()
{
	const int n = 5; // Array size
	const int m = 8; // Array size
	int sum = 0;
	float sum_mean = 0;
	int minelem;
	int maxelem;

	int my_arr[n][m];
	srand(time(0));
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
		{
			my_arr[i][j] = (rand() % 101);
			std::cout << std::setw(4) << my_arr[i][j];
		};
		std::cout << std::endl;
	};
	std::cout << std::endl;
	minelem = my_arr[0][0];
	maxelem = my_arr[0][0];

	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
		{
			sum += my_arr[i][j];
			if (minelem > my_arr[i][j])
			{
				minelem = my_arr[i][j];
			};
			if (maxelem < my_arr[i][j])
			{
				maxelem = my_arr[i][j];
			};

		}
	};
	sum_mean = sum / (float)(m * n);
	std::cout << "Sum of elements is: " << sum << std::endl;
	std::cout << "Arithmetic-mean all elements is: " << sum_mean << std::endl;
	std::cout << "Max element is: " << maxelem << std::endl;
	std::cout << "Min element is: " << minelem << std::endl;

	return 0;
}
