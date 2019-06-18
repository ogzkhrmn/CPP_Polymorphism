#pragma once
#include <iostream>
#include <string>

using namespace  std;

class Employee
{
public:
	Employee(string, string, double);

	virtual void showName() const;
	virtual void showSalary() const;
	void showSalaryNormal() const;
protected:
	double salary;
private:
	string name;
	string surname;
};
