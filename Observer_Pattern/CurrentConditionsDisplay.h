#pragma once
#include "IObserver.h"
#include "IDisPlayElement.h"
class CurrentConditionsDisplay: public IObserver,IDisPlayElement
{
private:
	float temperature;
	float humidity;
	class WeatherData* weatherData; //클래스형 전방선언은 포인터로해야함.

public:
	CurrentConditionsDisplay(WeatherData* weatherData);
	void Update(float temperature, float humidity, float pressure) override;
	void Display() override;


};

