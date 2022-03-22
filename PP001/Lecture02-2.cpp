#include <iostream>
#include <string>

using namespace std;

class Car
{
public :
	Car()
	{
		cout << "Car�� �����մϴ�\n";
	}
	~Car()
	{
		cout << "Car�� �Ҹ�˴ϴ�.\n";
	}
	virtual void OpenWindow()
	{
		cout << "â���� ���ϴ�\n";
	}
	virtual void ChangeGear()
	{
		cout << "�� �ٲߴϴ�\n";
	}
};
class Spark : public Car
{
public:
	Spark()
	{
		cout << "����ũ�� �����˴ϴ�.\n";
	}
	~Spark()
	{
		cout << "����ũ�� �Ҹ�˴ϴ�.\n";
	}
	void OpenWindow()
	{
		cout << "�������� â���� ���ϴ�.\n";
	}
	void ChangeGear()
	{
		cout << "�������� �� �ٲߴϴ�.\n";
	}
};
class Audi : public Car
{
public:
	Audi()
	{
		cout << "����Į���̵尡 �����˴ϴ�.\n";
	}
	~Audi()
	{
		cout << "����Į���̵尡 ���� ���߽��ϴ�..\n";
	}
	void OpenWindow()
	{
		cout << "�ڵ����� â���� ���ϴ�.\n";
	}
	void ChangeGear()
	{
		cout << "�ڵ����� �� �ٲߴϴ�.\n";
	}
};
//������ �Լ�
void main()
{
	Car* c[2];
	c[0] = new Spark();
	c[1] = new Audi();

	for (size_t i = 0; i < 2; i++)
	{
		c[i]->OpenWindow();
		c[i]->ChangeGear();
		delete(c[i]);
	}
} 