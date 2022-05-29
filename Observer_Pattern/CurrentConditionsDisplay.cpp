#include "CurrentConditionsDisplay.h"
#include"WeatherData.h"
#include<iostream>
CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData* weatherData)
{
	this->weatherData = weatherData;
	weatherData->RegisterObserver(this);
}

void CurrentConditionsDisplay::Update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	Display();
}

void CurrentConditionsDisplay::Display()
{
	std::cout << "현재 상태 : 온도:" << temperature << "F, 습도:" << humidity << "%"<<std::endl;
}

