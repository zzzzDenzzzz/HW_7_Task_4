#include "Human.h"

Human::Human(string surname, string name, string patronymic, Data data_of_birth)
{
	this->id = id;
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	this->data_of_birth = data_of_birth;
	count_human++;
}

Human::Human() : Human{"surname", "name", "patronymic", Data()}
{
}

Human::Human(Data data_of_birth) : Human{"surname", "name", "patronymic" , data_of_birth}
{
	this->data_of_birth = data_of_birth;
}

Human::Human(const Human &human)
	: surname{human.surname},
	name{human.name},
	patronymic{human.patronymic},
	data_of_birth{human.data_of_birth}
{
	count_human++;
}

Human::~Human()
{
}

int Human::getCountHuman()
{
	cout << "count human: ";
	return count_human;
}

int Human::getId()
{
	cout << "Id: ";
	return id++;
}

void Human::setSurname(string surname)
{
	this->surname = surname;
}

string Human::getSurname()
{
	cout << "Surname: ";
	return surname;
}

void Human::setName(string name)
{
	this->name = name;
}

string Human::getName()
{
	cout << "Name: ";
	return name;
}

void Human::setPatronymic(string patronymic)
{
	this->patronymic = patronymic;
}

string Human::getPatronymic()
{
	cout << "Patronymic: ";
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
	cout << "Data of birth:\n";
	cout << getDataOfBirth().getDay() << endl;
	cout << getDataOfBirth().getMonth() << endl;
	cout << getDataOfBirth().getYear() << endl << endl;
}

int Human::count_human{ 0 };
int Human::id{ 0 };