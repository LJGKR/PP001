#pragma once
#include "MCommand.hpp"
using namespace std;

namespace Museun
{
	MCommand *key[5];
	void Start()
	{
		key[0] = new LeftCommand();
		key[1] = new RightCommand();
		key[2] = new DownCommand();
		key[3] = new JumpCommand();
		key[4] = new RunCommand();

		//cout << "�ʱ�ȭ��..\n";
	}
	void Input()
	{
		
		int input;
		cin >> input;

		key[input]->Execute();

		//cout << "�Է���..\n";
		//cin >> a;
	}

	void Update()
	{
		//cout << "������Ʈ��..\n";
	}

	void Render()
	{
		//cout << "��������..\n";
	}
	void Release()
	{
		//cout << "������..\n";
		for (size_t i = 0; i < 5; i++)
		{
			delete(key[i]);
		}
	}
	class MGameLoop
	{
	public :

		bool isGameRunning = false;

	     MGameLoop() {}
		~MGameLoop() {}

		void Run()
		{
			isGameRunning = true;

			Start();

			while (isGameRunning)
			{
				Input();
			    Update();
				Render();

			}
			Release();
		}
	};
}