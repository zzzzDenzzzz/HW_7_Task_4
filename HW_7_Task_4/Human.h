#pragma once

#include<string>
#include<iostream>
#include"Data.h"

using namespace std;

class Human
{
	int id;
	string surname;
	string name;
	string patronymic;
	Data data_of_birth;
	static int count_human;
public:
	Human(int id, string surname, string name, string patronymic, Data data_of_birth);
	Human();
	Human(Data data_of_birth);
	Human(const Human &human);
	~Human();
	static int getCountNuman();
	void setId(int id);
	int getId();
	void setSurname(string surname);
	string getSurname();
	void setName(string name);
	string getName();
	void setPatronymic(string patronymic);
	string getPatronymic();
	void setDataOfBirth(Data data_of_birth);
	Data getDataOfBirth();
	void printInfoHuman();
};