#pragma once
#include"FlyBehavior.h"
#include<iostream>
class FlyNoWay :public IFlyBehavior
{
	void fly() override
	{
		std::cout << "저는 못날아요" << std::endl;
	}
};