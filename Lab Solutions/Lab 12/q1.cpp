
////           HAIDER ABBAS MOAZZAM 22L-7862


#include<iostream>
#include<cstring>
#include<string>
using namespace std;
const int s = 8;
void binary_search(int array[], int num)
{
	int end = 8;
	int s = 0, e = end - 1, mid, check = 0;
		while (s <= e)
		{
			mid = (s + e) / 2;
			if (array[mid] == num)
			{
				cout << "Value Found at index " << mid << endl;
				check = 1;
				break;
			}
			else if (array[mid] >= num)
			{
				e = mid - 1;
			}
			else
			{
				s = mid + 1;
			}
		}
		if (check == 0)
			cout << "Number not found at any index" << endl;
		
}
void input1(int array[])
{
	for (int i = 0; i < s; ++i)
	{
		cin >> array[i];
	}
}
void bubble_sort(int array[])
{
	int temp;
	for (int i = 0; i < s; ++i)
	{
		 for (int j = 0; j < s-1; ++j)
		 {
			 if (array[j] > array[j + 1])
			 {
				 temp = array[j];
				 array[j] = array[j + 1];
				 array[j + 1] = temp;
			 }
		 }
	}
}
void input(char array[], int s, string str2)
{
	for (int i = 0; i < s; ++i)
	{
		array[i] = str2[i];
	}
}
void reverse_string(char array[], int s)
{
	for (int i = s-1; i >= 0; --i)
	{
		cout << array[i];
	}
}
void rotate()
{
	int num;
	do
	{
		int fact = -1;
		int array[8];
		int array1[s];
		cout << "Enter entries for an array of size 8 " << endl;
		for (int i = 0; i < s; ++i)
		{
			cin >> array[i];
		}
		cout << "-----------------------------------" << endl;
		while (fact<0 || fact>s)
		{
			cout << "enter the factor by which you want to rotate the array " << endl;
			cin >> fact;
		}
		for (int j = 0, count = fact; count < s; ++count, ++j)
		{
			array1[j] = array[count];
		}
		for (int k = 0, m = s - fact; k < fact; ++k, ++m)
		{
			array1[m] = array[k];
		}
		cout << "-----------------------------------" << endl;
		for (int l = 0; l < s; ++l)
		{
			cout << array1[l] << "\t";
		}
		cout << endl;
		cout << "-----------------------------------" << endl;
		cout << "Enter 0 if you want to continue and 1 if you want to terminate" << endl;
		cin >> num;
	} while (num == 0);
}
void reverseString()
{
	int num;
	do
	{
			char array[60];
	string str;
	cout << "Enter a string " << endl;
	getline(cin, str);
	int size1;
	cout << "Enter the number of characters in the array " << endl;
	cin >> size1;
	input(array, size1, str);
	reverse_string(array, size1);
		cout << "---------------------------------------" << endl;
		cout << "Enter 0 if you want to repeat and 1 if you want to terminate" << endl;
		cin >> num;
	} while (num == 0);

}
void binary_search1()
{
	int num1 ;
	do
	{
		int array[8];
		cout << "-----------------------------------------------" << endl;
		cout << "Enter the values for each index " << endl;
		input1(array);
		cout << "For binary search first we sort the array and the array becomes " << endl;
		bubble_sort(array);
		for (int n = 0; n < s; ++n)
		{
			cout << array[n] << "\t";
		}
		cout << endl;
		cout << "Enter the number you want to find in the array " << endl;
		int num;
		cin >> num;
		binary_search(array, num);
		cout << "-----------------------------" << endl;
		cout << "Enter 0 if you want to repeat and 1 if you terminate" << endl;
		cin >> num1;
	} while (num1 == 0);
}
void selection_sort(int array[])
{
	int temp, min, index;
	for (int i = 0; i < s; ++i)
	{
		min = array[i];
		index = i;
		for (int j = i+1; j < s; ++j)
		{
			if (min>array[j])
			{
				min = array[j];
				index = j;
			}
		}
		array[index] = array[i];
		array[i] = min;
	}
	cout << "--------------------------------------" << endl;
	cout << "After selection sort the array becomes " << endl;
	for (int k = 0; k < s; ++k)
	{
		cout << array[k] << "   ";
	}
	cout << endl;
}
void selection_sort1()
{
	cout << "---------------------------------" << endl;
	cout << "Enter the values for an array of size 8" << endl;
	int array[s];
	input1(array);
	selection_sort(array);
}
void unique1(int array[])
{
	cout << "The unique elements of the array are : " << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << array[0] << "    ";
	int count;
	for (int i = 1; i < s; ++i)
	{
		count = 0;
		int j = i - 1;
		while (j >= 0)
		{
			if (array[i] == array[j])
				++count;
			--j;
		}
		if (count == 0)
			cout << array[i] << "     ";
	}
	cout << endl;
	cout << "----------------------------------" << endl;
}
void unique()
{
	int array[8];
	input1(array);
	unique1(array);

}
void menu()
{
	int check, num2;
	do
	{
		int num = -1;
		cout << "----------------------------------------------------------------" << endl;
		cout << "Welcome to the menu" << endl;
		cout << "Functions" << "                     " << "keys" << endl;
		cout << "Print unique entries " << "           " << 1 << endl;
		cout << "Rotate an array cyclically      " << 2 << endl;
		cout << "Reverse string " << "                 " << 3 << endl;
		cout << "Binary search" << "                   " << 4 << endl;
		cout << "Bubble sort " << "                    " << 5 << endl;
		cout << "Selection sort" << "                  " << 6 << endl;
		cout << "----------------------------------------------------------------" << endl;
		while (num <1 || num>6)
		{
			cout << "Enter the appropriate key " << endl;
			cin >> num;
		}
		if (num == 1)
		{
			do
			{
				cout << "Enter values for an array of size 8" << endl;
				unique();
				cout << "----------------------------------------" << endl;
				cout << "Enter 0 if you want to repeat and 1 if you want to terminate " << endl;
				cin >> num2;
			} while (num2 == 0);
		}
		else if (num == 2)
		{
			rotate();
		}
		else if (num == 3)
		{
			cout << "cant solve it " << endl;
		}
		else if (num == 4)
		{
			binary_search1();
		}
		else if (num == 5)
		{
			int num;
			do
			{
				int array[8];
				cout << "-----------------------------------" << endl;
				cout << "Enter the values for an array of size 8" << endl;
				input1(array);
				bubble_sort(array);
				cout << "After bubble sorting the array becomes " << endl;
				for (int i = 0; i < s; ++i)
				{
					cout << array[i] << "   ";
				}
				cout << endl;
				cout << "------------------------------------------------------" << endl;
				cout << "Enter 0 if you want to repeat and 1 if you want to terminate " << endl;
				cin >> num;
			} while (num == 0);
		}
		else if (num == 6)
		{
			int num1;
			do
			{
				selection_sort1();
				cout << "------------------------------------" << endl;
				cout << "Enter 0 if you want to repeat and 1 if you want to terminate" << endl;
				cin >> num1;
			} while (num1 == 0);
		}
		cout << "-----------------------------------" << endl;
		cout << "Welcome back to the menu" << endl;
		cout << "Enter 0 if you want to exit and 1 if you want to repeat" << endl;
		cin >> check;
	} while (check == 1);
}
int main()
{
	menu();
	cout << "BYE-BYE" << endl;
}