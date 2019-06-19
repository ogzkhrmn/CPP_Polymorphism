#include "Employee.h"
#include "HourlyWorket.h"
#include "Stack.h"

template <class T>
void printArray(const T* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

//size_t is unsigned integer.
template <class T, size_t N>
size_t getLength(T (&)[N])
{
	return N;
}

int main()
{
	Employee e("Oguz", "Kahraman", 123.00);
	HourlyWorket hw("Oguz", "Kahraman", 123.00);


	e.showName();
	e.showSalary();
	e.showSalaryNormal();


	hw.showName();
	hw.showSalary();
	hw.showSalaryNormal();

	Employee* e1;
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

	int a[] = {1, 2, 3, 4, 5};
	char b[] = {'1', '2', '3', '4', '5'};
	double c[] = {1.1, 2.2, 3.3, 4.3, 5.5};
	printArray(a, getLength(a));
	printArray(b, getLength(b));
	printArray(c, getLength(c));

	Stack<double> s(5);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	s.push(16);
	s.push(17);


	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	return 1;
}
