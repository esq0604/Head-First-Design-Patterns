#pragma once
#include"QuakBehavior.h"
#include<iostream>
class MuteQuack :IQuakBehavior
{
public:
	void quack() override
	{
		std::cout << "<< ����~ >>" << std::endl;
	}
};