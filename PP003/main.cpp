#include <iostream>
using namespace std;


class A
{
public :
	virtual void dynamic_print()
	{
		cout << "´ÙÀÌ³ª¹Í µ¥Çò1\n";
	}

	void static_print()
	{
		cout << "µ¥Çò\n";
	}

};

class B : public A
{
public :
	void dynamic_print()
	{
		cout << "´ÙÀÌ³ª¹Í µ¥Çò2\n";
	}
	void static_pirnt()
	{
		cout << "µ¥Çò2\n";
	}

};

void main()
{
	A* tempA;
	B* tempB = new B();
	tempA = tempB;
	tempA->static_print();
	tempB->static_print();

	tempA->dynamic_print();
	tempB->dynamic_print();
}