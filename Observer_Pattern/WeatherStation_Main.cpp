#include"WeatherData.h"
#include"CurrentConditionsDisplay.h"
#include"StaticsDisPlay.h"
#include"ForecastDisplay.h"
int main()
{
	WeatherData weatherData;
	CurrentConditionsDisplay currentConditionsDisplay(&weatherData);
	CurrentConditionsDisplay currentConditionsDisplay2(&weatherData);
	StaticsDisPlay staticsDisplay(&weatherData);
	ForecastDisplay forecastDisplay(&weatherData);

	weatherData.SetMeasurement(80, 65, 30.4f);
	weatherData.RemoveObserver(&currentConditionsDisplay2); //��������� ���÷����� ��°���� ���� ������ ��������� �� �� �� �ִ�.
	weatherData.SetMeasurement(82, 70, 29.2f);
	weatherData.SetMeasurement(78, 90, 29.2f);
}