#pragma once
#include "Employee.h"
#include <iostream>
#include <string>

using namespace  std;
class HourlyWorket :
	public Employee
{
public:
	HourlyWorket(string, string, double);
	virtual void showName() const;
	virtual void showSalary() const;
	void showSalaryNormal() const;
private:
	char* name{};
	char* surname{};
	double salary{};
};

