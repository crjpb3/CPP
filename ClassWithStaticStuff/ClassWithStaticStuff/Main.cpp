#include <iostream>
#include <string>
#include <vector>
#include "Test_Class.h"
//using namespace std;

int Test_Class::Test_Class_Obj_Num = 0;

int main()
{
	std::vector<Test_Class*> objects;
	objects.push_back(new Test_Class("Zero", 0));

	Test_Class* arr;

	arr = new Test_Class[5];

	std::cout << "Vector object name: " << objects[0]->get_name() << std::endl;
	std::cout << "Vector object id: " << objects[0]->get_id() << std::endl << std::endl;

	Test_Class* obj1;
	obj1 = new Test_Class("One", 1000);
	std::cout << "Number of objects: " << Test_Class::Test_Class_Obj_Num << std::endl;

	Test_Class* obj2;
	obj2 = new Test_Class("One", 1000);
	std::cout << "Number of objects: " << Test_Class::Test_Class_Obj_Num << std::endl;

	Test_Class* obj3;
	obj3 = new Test_Class("One", 1000);
	std::cout << "Number of objects: " << Test_Class::Test_Class_Obj_Num << std::endl;

	delete obj2;
	std::cout << "Obj2 deleted" << std::endl;
	std::cout << "Number of objects: " << Test_Class::Test_Class_Obj_Num << std::endl;

	delete obj1;
	std::cout << "Obj1 deleted" << std::endl;
	std::cout << "Number of objects: " << Test_Class::Test_Class_Obj_Num << std::endl;

	system("pause");
	return 0;
}