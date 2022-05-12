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
		std::cout << "���� ���� ���� �Դϴ�." << std::endl;
	}
};