#pragma once
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"
#include "Player.hpp"
#include "Obstacle.hpp"
#include <cstdlib>

using namespace std;


namespace MuSeoun_Engine
{
	class MGameLoop
	{
	private :
		bool _isGameRunning;
		MConsoleRenderer cRenderer;

		chrono::system_clock::time_point startRenderTimePoint;
		chrono::duration<double> renderDuration;
		Player p;
		Obstacle obs;
		string p1 = "P";
		string n = "n";
		string g = "";

	public :

		MGameLoop() 
		{
			_isGameRunning = false;
		}
		~MGameLoop() {}

		void Run()
		{
			_isGameRunning = true;

			Initialize();
			startRenderTimePoint = chrono::system_clock::now();

			while (_isGameRunning)
			{
				Input();
				Update();
				Render();

			}
			Release();
		}
		void Stop()
		{
			_isGameRunning = false;
		}


	private :

		
		void Initialize ()
		{
			
		}

		void Input()
		{
			
			if (GetAsyncKeyState(VK_SPACE) == -0x8000 || GetAsyncKeyState(VK_SPACE) == -0x8001)
			{
				p.isKeyPressed();
			}
			else
			{
				p.isKeyUnpressed();
			}
			int x = rand() % 10;
			if (x < 5)
			{
				obs.MoveObstacle();
			}
			else
			{
				obs.MoveFastObstacle();
			}

			if (obs.x <= 0)
			{
				obs.ResetObstacle();
			}

			if (obs.x == p.x && obs.y == p.y)
			{
				p1 = "";
				n = "";
				g = "Gmae Over...";
			}
			
		}
		void Update()
		{
			
		}
		void Render()
		{
			
				cRenderer.Clear();

				cRenderer.MoveCursor(obs.x, obs.y);
				cRenderer.DrawString(n);

				cRenderer.MoveCursor(p.x, p.y);
				cRenderer.DrawString(p1);

				cRenderer.MoveCursor(20, 3);
				cRenderer.DrawString(g);


				cRenderer.MoveCursor(10, 10);
				
				renderDuration = chrono::system_clock::now() - startRenderTimePoint;

				startRenderTimePoint = chrono::system_clock::now();
				
				double frame = 1.0 / renderDuration.count();
				int Frame = frame + 0;

				string fps = "FPS(seconds):" + to_string(Frame);
				cRenderer.DrawString(fps);
				//fps 출력하는 코드 ....
			

			//cout << "Rendering speed : " << renderDuration.count() << "sec" << endl;
			//cout << "프로그래밍 패턴 스크린샷..";

			//int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000 / 0);

			//if (remainingFrameTime > 0)
			//{
				//this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));
			//}
				
		}


		void Release(){}


	private :   //게임 사용 함수

		void MoveCurSor(short x , short y)
		{
			COORD position = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

		}

		void SetCursorState(bool visible)
		{
			HANDLE hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

			CONSOLE_CURSOR_INFO consoleCursorInfo;
			consoleCursorInfo.bVisible = visible;
			consoleCursorInfo.dwSize = 1;

			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleCursorInfo);
		}
	};
}