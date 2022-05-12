#pragma once
#include"FlyBehavior.h"
#include<iostream>
class FlyWithWings :public IFlyBehavior
{
	void fly() override
	{
		std::cout << "날고 있어요!!" << std::endl;
	}
};