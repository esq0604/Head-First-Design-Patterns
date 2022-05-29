#pragma once
#include"IObserver.h"
#include"IDisPlayElement.h"
class StaticsDisPlay :public IObserver,IDisPlayElement
{
private:
	float maxTemp = 0.0f;
	float minTemp = 200;
	float tempSum = 0.0f;
	int numReading;
	class WeatherData* weatherData;
public:
	StaticsDisPlay(class WeatherData* weatherData);
	void Update(float temperature, float humidity, float pressure) override;
	void Display() override;
};

