#pragma once
#include "MCommand.hpp"

class JumpCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "���̽� ����!";
	}
};

class RunCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "���̽� �޸���!";
	}
};

class LeftCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "���̽� ����!";
	}
};

class RightCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "���̽� ������!";
	}
};

class DownCommand : public Museun::MCommand
{
public:
	void Execute()
	{
		std::cout << "���帮��!!";
	}
};