#pragma once
#include"Duck.h"
#include"Quack.h"
#include"FlyWithWings.h"
#include<iostream>
class MallardDuck : public Duck
{
public :
	MallardDuck()
	{
		quakBehavior = new Quack(); 
		flyBehavior = new FlyWithWings();
	}
	void display()
	{
		std::cout << "저는 물오리 입니다." << std::endl;
	}
};