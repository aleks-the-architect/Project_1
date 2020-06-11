#pragma once

#include<iostream>
#include <string>
#include <list>


//MyStruct Starting(MyStruct &str);

class MyStruct
{
public:
	MyStruct(std::string name, double b) :
		name(name), b(b)
	{
	}

	void PrintInfo()
	{
		std::cout << name << "\t" << b << std::endl;
	}

	std::string name;
	double b;
	std::list<int> c;

};


MyStruct CreateObject(std::string name, double b);

void Starting(int iter);
