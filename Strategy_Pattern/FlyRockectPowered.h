#pragma once
#include"FlyBehavior.h"
#include<iostream>
class FlyRokectPowered :public IFlyBehavior
{
public :
	void fly()
	{
		std::cout << "로켓 추진으로 날아갑니다" << std::endl;
	}
};