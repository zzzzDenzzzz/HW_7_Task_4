#include "Human.h"

Human::Human(int id, string surname, string name, string patronymic, Data data_of_birth)
{
	this->id = id;
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	this->data_of_birth = data_of_birth;
	count_human++;
}

Human::Human() : Human{ 0, "surname", "name", "patronymic", Data()}
{
}

Human::Human(Data data_of_birth) : Human{ 0, "surname", "name", "patronymic" , data_of_birth}
{
	this->data_of_birth = data_of_birth;
}

Human::Human(const Human &human)
	: id{human.id},
	surname{human.surname},
	name{human.name},
	patronymic{human.patronymic},
	data_of_birth{human.data_of_birth}
{
	count_human++;
}

Human::~Human()
{
}

int Human::getCountNuman()
{
	cout << "count human: ";
	return count_human;
}

void Human::setId(int id)
{
	this->id = id;
}

int Human::getId()
{
	return id;
}

void Human::setSurname(string surname)
{
	this->surname = surname;
}

string Human::getSurname()
{
	return surname;
}

void Human::setName(string name)
{
	this->name = name;
}

string Human::getName()
{
	return name;
}

void Human::setPatronymic(string patronymic)
{
	this->patronymic = patronymic;
}

string Human::getPatronymic()
{
	return patronymic;
}

void Human::setDataOfBirth(Data data_of_birth)
{
	this->data_of_birth = data_of_birth;
}

Data Human::getDataOfBirth()
{
	return data_of_birth;
}

void Human::printInfoHuman()
{
	cout << getId() << endl;
	cout << getSurname() << endl;
	cout << getName() << endl;
	cout << getPatronymic() << endl;
	cout << getDataOfBirth().getDay() << endl;
	cout << getDataOfBirth().getMonth() << endl;
	cout << getDataOfBirth().getYear() << endl;
	cout << getCountNuman() << endl << endl;
}

int Human::count_human{ 0 };