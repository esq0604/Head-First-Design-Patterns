#include "ForecastDisplay.h"
#include "WeatherData.h"
#include <iostream>
ForecastDisplay::ForecastDisplay(WeatherData* weatherData)
{
	this->weatherData = weatherData;
	weatherData->RegisterObserver(this);
}

void ForecastDisplay::Update(float temperature, float humidity, float pressure)
{
	lastPressure = currentPressure;
	currentPressure = pressure;

	Display();
}

void ForecastDisplay::Display()
{
	std::cout << "��� ����: ";
	if (currentPressure > lastPressure)
		std::cout << "������ �������� �ֽ��ϴ�!"<<std::endl;
	else if (currentPressure == lastPressure)
		std::cout << "���ݰ� ����Ұ� �����ϴ�!" << std::endl;
	else if (currentPressure < lastPressure)
		std::cout << "�ҽ��ϸ� �� �ðͰ����ϴ�!" << std::endl;
}
