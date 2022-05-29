#pragma once
#include "IObserver.h"
#include "IDisPlayElement.h"
class CurrentConditionsDisplay: public IObserver,IDisPlayElement
{
private:
	float temperature;
	float humidity;
	class WeatherData* weatherData; //Ŭ������ ���漱���� �����ͷ��ؾ���.

public:
	CurrentConditionsDisplay(WeatherData* weatherData);
	void Update(float temperature, float humidity, float pressure) override;
	void Display() override;


};

