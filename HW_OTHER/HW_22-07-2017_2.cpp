//решить не "в лоб" + использовать функции
//найти ошибку в оригинале
#include <iostream>
#include <stdlib.h>
#include <time.h>

static const int mas_max_len = 200;
int repeat(int arr[], int arr_leng, int num);

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
    int numb = 0;
    int repeat_numb = repeat(numbers, mas_len, numb);

	for (int i = 0; i < FROM_TO; ++i)
	{
	    int rep = repeat(numbers, mas_len, i);
	    if ( rep > 0)
        {
            std::cout << "Val: " << i << " is repeats for " << rep << "Times" << std::endl;
        };
        if (rep > repeat_numb
            {
                repeat_numb = rep;
                numb = i;
            }
	};

	std::cout << std::endl;
	if (repeat_numb > 1)
	{
    std::cout << "Val: " << numb;

	for (int i = 0; i < FROM_TO; ++i)
	{
	    int rep = repeat(numbers, mas_len, i);
	    if ( (rep == repeat_numb) && (i != numb))
            {
               std::cout << " and " << i;
            }
	};
	 std::cout << " is max repeats for " << repeat_numb << " Times\n";
	}
	else
    {
        std::cout << "The numbers of array is not repeats " << std::endl;
    }




	return 0;
}

int repeat(int arr[], int arr_leng, int num)
{
    int count_repeat = 0;
    for (int i = 0; i < arr_leng; ++i)
	{
		if (arr[i] == num)
        {
            ++count_repeat;
        }
	};
	return count_repeat;
}

