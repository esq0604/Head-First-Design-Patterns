#pragma once
#include"FlyBehavior.h"
#include<iostream>
class FlyRokectPowered :public IFlyBehavior
{
public :
	void fly()
	{
		std::cout << "���� �������� ���ư��ϴ�" << std::endl;
	}
};