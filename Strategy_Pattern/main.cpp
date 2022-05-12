#include"Duck.h"
#include"MallardDuck.h"
#include"ModelDuck.h"
#include"FlyRockectPowered.h"
using namespace std;

int main()
{
	MallardDuck mallard;
	mallard.display();
	mallard.swim();
	mallard.performFly();
	mallard.performQuak();
	
	cout << endl;

	ModelDuck model;
	model.display();
	model.swim();
	model.performFly();
	model.performQuak();

	cout << endl;

	model.performFly();
	model.SetFlyBehavior(new FlyRokectPowered());
	model.performFly();
}