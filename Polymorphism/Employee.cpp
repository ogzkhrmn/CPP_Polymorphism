#include "Employee.h"

Employee::Employee(string x, string y, double sal)
{
	name = x;
	surname = y;
	salary = sal;
}


void Employee::showName() const
{
	cout << name << " " << surname << endl;
}

void Employee::showSalary() const
{
	cout << "Virtual " << salary * 0.2 << endl;
}

void Employee::showSalaryNormal() const
{
	cout << "Normal " << salary << endl;
}
