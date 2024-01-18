#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
const int Size = 50;
int compare1(char array1[], char array2[])
{
	int x = strcmp(array1, array2);
	return x;
}
void task1(char array1[], char array2[])
{
	cout << "Enter the first string " << endl;
	cin.ignore();
	cin.getline(array1, 100);
	cout << "Enter the second string " << endl;
	cin.ignore();
	cin.getline(array2, 100);
	int compare = compare1(array1, array2);
	if (compare == 0)
		cout << "The strings are equal" << endl;
	else
		cout << "The strings are unequal " << endl;
	cout << "----------------" << endl;
#pragma warning (suppress : 4996);
	strcpy(array2, array1);
	cout << "Now after copying one string to another string we get " << "\n";
	compare = compare1(array1, array2);
	if (compare == 0)
		cout << "The strings are equal" << endl;
	else
		cout << "The strings are unequal" << endl;
	cout << "----------------" << endl;
}
void task2(char array1[])
{
	int length = strlen(array1);
	int count = 0;
	for (int i = 0; i < length; ++i)
	{
		if (array1[i] != ' ')
		{
			++count;
		}
	}
	cout << "Total characters are " <<count << endl;
}
void task3(char array1[])
{
	int length = strlen(array1);
	int count = 0;
	for (int i = 0; i < length; ++i)
	{
		if (array1[i] != ' ')
		{
			++count;
		}
		else
		{
			cout << count << "  ";
			count = 0;
		}
	}
	int count1 = 0;
	for (int j = length; array1[j] != ' '; --j)
	{
		++count1;
	}
	cout << count1 << endl;
}
void task4(char array1[], char elm)
{
	cout << "Enter a string" << endl;
	cin.ignore();
	cin.getline(array1, 100);
	int len = strlen(array1);
	for (int i = 0; i < len; ++i)
	{
		if (array1[i] != elm)
			cout << array1[i];
	}
	cout << endl;
}
void task5(char array1[])
{
	int len = strlen(array1);
	char check;
	int check1;
	int countC = 0, countS = 0, countSpecial = 0;
	for (int i = 0; i < len; ++i)
	{
		check = array1[i];
		check1 = int(check);
		if (check1 >= 65 && check1 <= 90)
			++countC;
		else if (check1 >= 97 && check1 <= 122)
			++countS;
		else if (check1 >= 33 && check1 <= 47)
			++countSpecial;
	}
	cout << "Capital characters are " << countC << "\n";
	cout << "Small letters are " << countS << "\n";
	cout << "Special char are " << countSpecial << "\n";
}
void task6(char array1[])
{
	int len = strlen(array1);
	cout << "Enter a character you want to find" << endl;
	char check;
	cin >> check;
	int count = 0;
	for (int i = 0; i < len; ++i)
	{
		if (array1[i] == check)
			++count;
	}
	if (count == 0)
		cout << "Character not found" << endl;
	else
		cout << "Character found " << count << " times " << endl;
}
void task7(char array1[])
{
	int len = strlen(array1);
	int ascii;
	char letter;
	for (int i = 0; i < len; ++i)
	{
		letter = array1[i];
		ascii = int(letter);
		if (ascii >= 65 && ascii < 90)
		{
			ascii = ascii + 32;
			letter = char(ascii);
			array1[i] = letter;
		}
		else if (ascii >= 97 && ascii <= 122)
		{
			ascii = ascii - 32;
			letter = char(ascii);
			array1[i] = letter;
		}
	}
	cout << "After converting characters we get " << endl;
	for (int j = 0; j < len; ++j)
	{
		cout << array1[j];
	}
	cout << endl;
}
void task8(char array1[])
{
	cout << "The length of the string is " << strlen(array1) << "\n";
}
int main()
{
	int choice, choice1;
	do {
		char array1[100];
		char array2[100];
		cout << "----------------" << endl;
		cout << "Function " << "                                        " << "keys" << endl;
		cout << "Check similarity of strings" << "                      " << 1 << endl;
		cout << "Check length of strings" << "                          " << 2 << endl;
		cout << "Convert every word into number of char           " << 3 << endl;
		cout << "Eliminate a char " << "                                " << 4 << endl;
		cout << "Count char" << "                                       " << 5 << endl;
		cout << "Search a char" << "                                    " << 6 << endl;
		cout << "Convert from small to capital and vice verse     " << 7 << endl;
		cout << "Count number of characters in string include space  " << 8 << endl;
		cout << "----------------" << endl;
		cout << "Enter a choice " << "\n";
		cin >> choice;
		while (choice < 1 || choice>8)
		{
			cout << "Enter again " << endl;
			cin >> choice;
		}
		if (choice == 1)
		{
			task1(array1, array2);
		}
		else if (choice == 3)
		{
			cout << "Enter a string " << endl;
			cin.ignore();
			cin.getline(array1, 100);
			task3(array1);
		}
		else if (choice == 2)
		{
			cout << "Enter a string" << endl;
			cin.ignore();
			cin.getline(array1, 100);
			task2(array1);
		}
		else if (choice == 4)
		{
			char elm;
			cout << "Enter a character you want to eliminate " << endl;
			cin >> elm;
			task4(array1, elm);
		}
		else if (choice == 5)
		{
			cout << "Enter a string" << endl;
			cin.ignore();
			cin.getline(array1, 100);
			task5(array1);
		}
		else if (choice == 6)
		{
			cout << "Enter a string" << endl;
			cin.ignore();
			cin.getline(array1, 100);
			task6(array1);
		}
		else if (choice == 7)
		{
			cout << "Enter a string" << endl;
			cin.ignore();
			cin.getline(array1, 100);
			task7(array1);
		}
		else if (choice == 8)
		{
			cout << "Enter a string" << endl;
			cin.ignore();
			cin.getline(array1, 100);
			task8(array1);
		}
		cout << "Enter 1 for another function and 0 to terminate  " << endl;
		cin >> choice1;
		system("CLS");
	} while (choice1 == 1);
	cout << "BYE-BYE" << endl;
}