#pragma once

#include"Human.h"

class Apartment
{
	Human *human;
public:
	Human getHuman();
	void setHuman(Human human);
	Apartment(int _human);
	~Apartment();
};