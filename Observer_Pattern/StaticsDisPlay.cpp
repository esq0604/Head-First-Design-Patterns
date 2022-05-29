#include "StaticsDisPlay.h"
#include "WeatherData.h"
#include<iostream>
StaticsDisPlay::StaticsDisPlay(WeatherData* weatherData)
{
	this->weatherData = weatherData;
	weatherData->RegisterObserver(this);
}

void StaticsDisPlay::Update(float temperature, float humidity, float pressure)
{
	tempSum += temperature;
	numReading++;

	if (temperature > maxTemp)
	{
		maxTemp = temperature;
	}

	if (temperature < minTemp)
	{
		minTemp = temperature;
	}

	Display();
}

void StaticsDisPlay::Display()
{
	std::cout << "���/�ְ�/���� �µ� = " << tempSum / numReading << "/" << maxTemp << "/" << minTemp << std::endl;
}
