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
		std::cout << "���� ������ �Դϴ�." << std::endl;
	}
};