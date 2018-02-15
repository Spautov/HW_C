#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

const int maxX = 8; //размер доски
const int maxY = 8;
int chessboard[maxX][maxY] = {}; //пустая шахматная доска
int moves[8][2] = {
	{ -1, -2 },{ -2, -1 },{ -2,  1 },{ 1, -2 },
	{ -1,  2 },{ 2, -1 },{ 1,  2 },{ 2,  1 }
}; //возможные шаги


int x = 0; //начальные координаты коня
int y = 0;
int x_temp = 0; // временные переменные для координат
int y_temp = 0;
int dx = 0;
int dy = 0;
int pace = 0; //общее количество сделаных шагов
void step(); //функция выбирает случайно выбирает шаг из 8-и возможных
bool free_cell(int x, int y); //функция проверяет свободна-ли клетка
bool step_passible(int x, int y); //функция проверяет возможно-ли сделать из данной клетки шаг
void step_up();



int main()
{
	srand(time(0));
	do
	{
		std::cout << "Enter start coordinate X and Y from 0 to "<< maxX-1 << std::endl;
		std::cin >> x >> y;
	} while (!(x >= 0 && x < maxX && y >= 0 && y < maxY));
	chessboard[x][y] = ++pace; // ставим коня на клетку выбранную пользователем
	x_temp = x;
	y_temp = y;
	step_up();
	for (int i = 0; i < maxX; ++i)
	{
		for (int j = 0; j < maxY; ++j)
		{
			std::cout << std::setw(4)<<chessboard[i][j] << "  ";
		};
		std::cout << std::endl;
	};

	return 0;
}

void step()
{
	int choice = (rand() % 8);
	dx = moves[choice][0];
	dy = moves[choice][1];
}

bool free_cell(int x, int y)
{
	if ((x >= 0) && (x < maxX) && (y >= 0) && (y < maxY) && (chessboard[x][y] == 0))
	{
		return true;
	}
	return false;
}

bool step_passible(int x, int y)
{
	int passible = 0;
	for (int i = 0; i < 8; ++i)
	{
		if  (free_cell(x+moves[i][0], y + moves[i][1]))
		{
			++passible;
		}
	};
	if (passible != 0)
	{
		return true;
	}
	return false;
}

void step_up()
{
    if (step_passible(x_temp, y_temp) && pace < (maxX*maxY))
	{
		do
		{
			step();
		} while (!free_cell(x_temp+dx, y_temp+dy));
		x_temp += dx;
		y_temp += dy;
		chessboard[x_temp][y_temp] = ++pace;
		step_up();
	}
	else if (pace >= (maxX*maxY))
	{
		std::cout << "You have won!!!!" << std::endl;
		return;
	}
	else
	{

		for (int i = 0; i < maxX; ++i)
	{
		for (int j = 0; j < maxY; ++j)
		{
			chessboard[i][j] = 0;
		};
	};
		pace = 1;
		chessboard[x][y] = pace;
		x_temp = x;
		y_temp = y;
		step_up();
	}
	return;
}
