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
		cout << "나이스 점프!";
	}
};

class RunCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "나이스 달리기!";
	}
};

class LeftCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "나이스 왼쪽!";
	}
};

class RightCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "나이스 오른쪽!";
	}
};

class DownCommand : public MCommand
{
public:
	void Execute()
	{
		cout << "엎드리기!!";
	}
};