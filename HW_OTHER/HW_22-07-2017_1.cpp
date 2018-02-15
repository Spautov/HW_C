//решить не "в лоб" + использовать функции
//найти ошибку в оригинале
#include <iostream>
#include <stdlib.h>
#include <time.h>

static const int mas_max_len = 200;

int main()
{
	srand(time(0));
	const int FROM_TO = 20;
	int mas_len;
	std::cin >> mas_len;
	std::cout << std::endl;
	int numbers[mas_max_len];
	for (int i = 0; i < mas_len; ++i)
	{
		numbers[i] = rand() % FROM_TO;
		std::cout << numbers[i] << ' ';
	}
	std::cout << std::endl<< std::endl<< std::endl;

	int summary[FROM_TO] = {};

	for (int i = 0; i < FROM_TO; ++i)
	{
		for (int j = 0; j < mas_len; ++j)
		{
			if (numbers[j] == i)
			{
				++summary[i];
			}
		}
	}

	for (int i = 0; i < FROM_TO; ++i)
	{
	    if (summary[i] > 1)
        {
            std::cout << "Val: " << i << " is repeats for " << summary[i] << "Times\n";
        }

	};
	int max_repeat = 0;
	int num_repeat = 0;
	for (int i = 0; i < FROM_TO; ++i)
	{
	    if (summary[i] > max_repeat && summary[i] > 1)
            {
                max_repeat = summary[i];
                num_repeat = i;
            }
	};
	std::cout << std::endl;
	if (max_repeat > 1)
	{
    std::cout << "Val: " << num_repeat;

	for (int i = 0; i < FROM_TO; ++i)
	{
	    if ((summary[i] == max_repeat) && (i != num_repeat))
            {
               std::cout << " and " << i;
            }
	};
	 std::cout << " is max repeats for " << summary[num_repeat] << " Times\n";
	}
	else
    {
        std::cout << "The numbers of array is not repeats " << std::endl;
    }
	return 0;
}
