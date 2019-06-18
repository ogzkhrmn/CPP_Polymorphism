#include "HourlyWorket.h"

HourlyWorket::HourlyWorket(string x, string y, double z) : Employee(x, y, z)
{
}

void HourlyWorket::showName() const
{
	cout << "HW "; 
	Employee::showName();
}

void HourlyWorket::showSalary() const
{
	cout << "HW Virtual " << Employee::salary * 0.3 << endl;
}

void HourlyWorket::showSalaryNormal() const
{
	cout << "HW Normal " << Employee::salary * 0.5 << endl;
}
