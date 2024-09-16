// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << &a << endl; 
	int* ptr = &a;
	cout << ptr << endl;

	cout << *ptr << endl; 
	*ptr = 1500;
	cout << a << endl; 
}

