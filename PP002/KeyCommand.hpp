#pragma once
#include "MCommand.hpp"

class JumpCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "나이스 점프!";
	}
};

class RunCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "나이스 달리기!";
	}
};

class LeftCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "나이스 왼쪽!";
	}
};

class RightCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "나이스 오른쪽!";
	}
};

class DownCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "엎드리기!!";
	}
};