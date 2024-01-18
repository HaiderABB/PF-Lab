#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4, num5;

	cout << "enter five numbers : " << endl;

	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	cout << "num1 is = " << num1 << endl;
	cout << "num2 is = " << num2 << endl;
	cout << "num3 is = " << num3 << endl;
	cout << "num4 is = " << num4 << endl;
	cout << "num5 is = " << num5 << endl;



	cout << "-----------------------------------------------------------------------------------" << endl;

	if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
		cout << " the greatest number " << num1 << endl;

	else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
	{
		cout << " the greatest number = " << num2 << endl;
	}


	else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5)
	{
		cout << "the greatest number = " << num3 << endl;
	}

	else if (num4 >= num1 && num4 >= num3 && num4 >= num2 && num4 >= num5)
	{
		cout << " the greatest number = " << num4 << endl;
	}

	else if (num5 >= num1 && num5 >= num3 && num5 >= num4 && num5 >= num2)
	{
		cout << " the greatest number = " << num5 << endl;
	}


	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "now checking for the smallest number :\n\n " << endl;


	if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
		cout << "the smallest number is = " << num1 << endl;

	else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5)
	{
		cout << "the smallest number = " << num2 << endl;
	}


	else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5)
	{
		cout << "the smallest number = " << num3 << endl;
	}

	else if (num4 <= num1 && num4 <= num3 && num4 <= num2 && num4 <= num5)
	{
		cout << "the smallest number = " << num4 << endl;
	}

	else if (num5 <= num1 && num5 <= num3 && num5 <= num4 && num5 <= num2)
	{
		cout << " the smallest number = " << num5 << endl;
	}





	cout << "haider abbas moazzam, 22l-7862" << endl;

}
