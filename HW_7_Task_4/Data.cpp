#include "Data.h"

Data::Data(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Data::Data() : Data{ 1, 1, 1 }
{
}

void Data::setDay(int day)
{
	this->day = day;
}

int Data::getDay()
{
	return day;
}

void Data::setMonth(int month)
{
	this->month = month;
}

int Data::getMonth()
{
	return month;
}

void Data::setYear(int year)
{
	this->year = year;
}

int Data::getYear()
{
	return year;
}