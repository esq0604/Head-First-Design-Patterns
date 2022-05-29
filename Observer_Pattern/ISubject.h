#pragma once
class ISubject
{
public:
	virtual void RegisterObserver(class IObserver* o)=0;
	virtual void RemoveObserver(class IObserver* o)=0;
	virtual void NotifyObserver() = 0;
};

