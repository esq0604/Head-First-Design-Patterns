#pragma once
#include"QuakBehavior.h"
#include<iostream>
class Squeack :public IQuakBehavior
{
	void quack() override
	{
		std::cout << "»à" << std::endl;
	}
};