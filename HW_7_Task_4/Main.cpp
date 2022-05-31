#include"Human.h"

int main()
{
	Human human;
	cout << human.getId() << endl;
	cout << human.getSurname() << endl;
	cout << human.getName() << endl;
	cout << human.getPatronymic() << endl;
	cout << human.getDataOfBirth().getDay() << endl;
	cout << human.getDataOfBirth().getMonth() << endl;
	cout << human.getDataOfBirth().getYear() << endl;
	cout << human.getCountNuman() << endl << endl;

	Human human_1{};
	human_1.printInfoHuman();

	Human human_2{ 1, "Ivanov", "Ivan", "Ivanovich", {24, 12, 1985} };
	human_2.printInfoHuman();

	Human human_3;
	human_3.setId(3);
	human_3.setSurname("Petrov");
	human_3.setName("Petr");
	human_3.setPatronymic("Petrovich");
	human_3.setDataOfBirth({ 24, 12, 1990 });
	human_3.printInfoHuman();

	Human human_4{ human_2 };
	human_4.setId(4);
	human_4.setName("Petr");
	human_4.setDataOfBirth({ 24, 12, 1991 });
	human_4.printInfoHuman();

	Human human_5{ {24, 12, 1992} };
	human_5.printInfoHuman();

	return 0;
}