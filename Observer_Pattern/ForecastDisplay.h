#pragma once
#include"IObserver.h"
#include"IDisPlayElement.h"
class ForecastDisplay : public IObserver,IDisPlayElement
{
private:
	float currentPressure = 29.92f;
	float lastPressure;
	class WeatherData* weatherData;

public:
	ForecastDisplay(WeatherData* weatherData);

	void Update(float temperature, float humidity, float pressure) override;

	void Display() override;
};

