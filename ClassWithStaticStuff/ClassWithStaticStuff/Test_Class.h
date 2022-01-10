#pragma once
#ifndef TEST_CLASS_H
#define TEST_CLASS_H
#include <string>

class Test_Class
{
public:
	static int Test_Class_Obj_Num;
	Test_Class() {};
	Test_Class(std::string name, int id)
	{
		this->name = name;
		this->id = id;
		Test_Class_Obj_Num++;
	};

	~Test_Class() { Test_Class_Obj_Num--; };

	std::string get_name() { return this->name; };
	int get_id() { return this->id; };

private:
	std::string name;
	int id;
};
#endif // !TEST_CLASS_H