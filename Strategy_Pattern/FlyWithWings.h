#pragma once
#include"FlyBehavior.h"
#include<iostream>
class FlyWithWings :public IFlyBehavior
{
	void fly() override
	{
		std::cout << "���� �־��!!" << std::endl;
	}
};