#pragma once
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"

class Obstacle
{
public:
	double x;
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
		x -= 1.5;
	}
	void ResetObstacle()
	{
		x = 50;
	}
};
