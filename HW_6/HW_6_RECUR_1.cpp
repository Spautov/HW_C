#include <iostream>

int NOD(int a, int b);


int main() {
	int first = 0;
	int second = 0;
	std::cout << "Enter two numbrs:  ";
	std::cin >> first >> second;
	std::cout << "NOD of " << first << " and " << second << " is "
	<< NOD(first, second)<< std::endl;
	return 0;
}

int NOD(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	else if (a > b)
	{
		return NOD(a%b, b);
	}
	else
	{
		return NOD(a, b%a);
	};
}
