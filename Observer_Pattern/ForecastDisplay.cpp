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
	std::cout << "기상 예보: ";
	if (currentPressure > lastPressure)
		std::cout << "날씨가 좋아지고 있습니다!"<<std::endl;
	else if (currentPressure == lastPressure)
		std::cout << "지금과 비슷할것 같습니다!" << std::endl;
	else if (currentPressure < lastPressure)
		std::cout << "쌀쌀하며 비가 올것같습니다!" << std::endl;
}
