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
	std::cout << "���� ���� : �µ�:" << temperature << "F, ����:" << humidity << "%"<<std::endl;
}

