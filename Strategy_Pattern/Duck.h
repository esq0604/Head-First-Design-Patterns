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
		std::cout << "모든 오리는 물에 뜹니다 . 가짜 오리도 뜨죠 " << std::endl;
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