#pragma once
#include<iostream>
#include"FlyBehavior.h"
#include"QuakBehavior.h"

class Duck
{
protected:
	IFlyBehavior* flyBehavior;
	IQuakBehavior* quakBehavior;
public:
	Duck() {}

	virtual void display() {}

	void performFly()
	{
		flyBehavior->fly();
	}
	void performQuak()
	{
		quakBehavior->quack();
	}
	void swim()
	{
		std::cout << "��� ������ ���� ��ϴ� . ��¥ ������ ���� " << std::endl;
	}
	void SetFlyBehavior(IFlyBehavior* fb)
	{
		flyBehavior = fb;
	}

	void SetQuackBehavior(IQuakBehavior* qb)
	{
		quakBehavior = qb;
	}

};