#include "Employee.h"
#include "HourlyWorket.h"

void main()
{
	Employee e("Oguz", "Kahraman", 123.00);
	HourlyWorket hw("Oguz", "Kahraman", 123.00);


	e.showName();
	e.showSalary();
	e.showSalaryNormal();


	hw.showName();
	hw.showSalary();
	hw.showSalaryNormal();

	Employee *e1;
	e1 = &hw;

	cout << "Inheritance pointer " << endl;
	e1->showName();
	e1->showSalary();
	e1->showSalaryNormal();


	e = hw;
	cout << "Inheritance reference " << endl;
	e.showName();
	e.showSalary();
	e.showSalaryNormal();
}