#include "Apartment.h"

Human Apartment::getHuman()
{
	return Human();
}

void Apartment::setHuman(Human human)
{

}

Apartment::Apartment(int _human)
{
	Human *human = new Human[_human];
}

Apartment::~Apartment()
{
	delete[]human;
}
