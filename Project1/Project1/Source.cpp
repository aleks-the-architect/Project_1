#include "Source.h"





MyStruct CreateObject(std::string name, double b)
{
	std::list <MyStruct> aFewStruct;
	MyStruct str(name, b);
	void (MyStruct::*pPrintInfo)() = &MyStruct ::PrintInfo;

	return str;

	//std::cout << str.name << std::endl;
}


void Starting(int iter)
{
	std::string name;
	double b;

	for (size_t i = 0; i < iter; i++)
	{
		std::cout << "������� ���:\t";
		std::cin >> name;
		std::cout << "\n������� �����:\t\n";
		std::cin >> b;

		MyStruct str = CreateObject(name, b);
		std::cout << str.name << std::endl;
	}
}
