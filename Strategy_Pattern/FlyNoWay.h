#pragma once
#include"FlyBehavior.h"
#include<iostream>
class FlyNoWay :public IFlyBehavior
{
	void fly() override
	{
		std::cout << "���� �����ƿ�" << std::endl;
	}
};