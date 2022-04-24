#pragma once
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"

class Obstacle
{
public:
	int x;
	int y;

	Obstacle()
	{
		x = 50;
		y = 7;
	}
	~Obstacle()
	{

	}

	void MoveObstacle()
	{
		x--;
	}
	void MoveFastObstacle()
	{
		x -= 2;
	}
	void ResetObstacle()
	{
		x = 50;
	}
};
