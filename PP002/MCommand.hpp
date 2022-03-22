#pragma once

using namespace std;

class MCommand
{
public:
	MCommand() {}
	virtual ~MCommand() {}

	virtual void Execute() {}
};

class JumpCommand : public MCommand
{
public :
	void Execute()
	{
		cout << "���̽� ����!";
	}
};

class RunCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "���̽� �޸���!";
	}
};

class LeftCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "���̽� ����!";
	}
};

class RightCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "���̽� ������!";
	}
};

class DownCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "���帮��!!";
	}
};