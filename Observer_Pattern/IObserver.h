#pragma once
class IObserver
{
public:
	virtual void Update(float temperature, float humidity, float pressure)=0;
};

