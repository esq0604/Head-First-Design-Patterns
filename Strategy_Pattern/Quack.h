#pragma once
#include"QuakBehavior.h"
#include<iostream>

class Quack :public IQuakBehavior
{

public:
	void quack()
	{
		std::cout << "Ва" << std::endl;
	}
};