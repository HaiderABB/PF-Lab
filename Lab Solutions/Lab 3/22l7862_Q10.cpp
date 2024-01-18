#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	char product, division, addition, subtract, modulus, oper;
	product = '*';
	division = '/';
	modulus = '%';
	subtract = '-';
	addition = '+';


	cout << "Enter two number for operation " << endl;
	cin >> num1 >> num2;

	cout << "Enter the operator you want to apply : " << endl;
	cin >> oper;

	if (oper == product)
	{
		cout << "The product of two number is = " << num1 * num2 << endl;
	}

	if (oper == addition)
	{
		cout << "The sum of two number is = " << num1 + num2 << endl;
	}


	if (oper == division)
	{
		if (num2 == 0)
		{
			cout << "Invalid division " << endl;
		}
		else {
			cout << "The division of two number is = " << (float)num1 / (float)num2 << endl;
		}


		if (oper == modulus)
		{
			cout << "The remainder of two number is = " << num1 % num2 << endl;
		}

		if (oper == subtract)
		{
			cout << "The difference of two number is = " << num1 - num2 << endl;
		}

		cout << "Haider Abbas Moazzam, 22L-7862" << endl;


	}

}