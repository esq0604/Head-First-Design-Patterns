#pragma once
#include <vector>
#include "ISubject.h"
class WeatherData :public ISubject
{
private:
	std::vector<IObserver*> observers;
	float temperature;
	float humidity;
	float pressure;
public:
	void RegisterObserver(IObserver* o) override;
	void RemoveObserver(IObserver* o) override;
	void NotifyObserver() override;
	void MeasurementsChanged();
	void SetMeasurement(float temperature, float humidity, float pressure);



};

