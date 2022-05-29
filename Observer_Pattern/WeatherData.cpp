#include "WeatherData.h"
#include"WeatherData.h"
#include"IObserver.h"
#include<algorithm>
#include<iostream>
void WeatherData::RegisterObserver(IObserver* o)
{
	observers.push_back(o);
}

void WeatherData::RemoveObserver(IObserver* o)
{
	std::cout<< "Remove Observer" << std::endl;
	observers.erase(std::remove(observers.begin(), observers.end(), o), observers.end());
}

void WeatherData::NotifyObserver()
{
	for (auto i : observers)
	{
		i->Update(temperature, humidity, pressure);
	}
}

void WeatherData::MeasurementsChanged()
{
	NotifyObserver();
}

void WeatherData::SetMeasurement(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	MeasurementsChanged();
}
