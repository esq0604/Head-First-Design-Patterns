#pragma once
#include"Duck.h"
#include"FlyNoWay.h"
#include"Quack.h"
#include<iostream>
class ModelDuck : public Duck
{
public :
	ModelDuck()
	{
		flyBehavior = new FlyNoWay();
		quakBehavior = new Quack();
	}
	void display()
	{
		std::cout << "저는 모형 오리 입니다." << std::endl;
	}
};