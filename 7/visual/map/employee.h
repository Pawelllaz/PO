#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

using namespace std;

class Employee
{
public:
	string name;
	string Position;
	int Age;
	Employee();
	Employee(string, string, int);
	string output_elements();
	~Employee();
};



#endif // !__EMPLOYEE_H__
