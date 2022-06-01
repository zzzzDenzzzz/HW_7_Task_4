#pragma once
#include<iostream>

using namespace std;

class Data
{
	int day;
	int month;
	int year;
public:
	Data(int day, int month, int year);
	Data();
	void setDay(int day);
	int getDay();
	void setMonth(int month);
	int getMonth();
	void setYear(int year);
	int getYear();
};