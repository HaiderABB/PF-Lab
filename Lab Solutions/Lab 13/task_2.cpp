#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
ofstream input;
ifstream outRead;
char array1[6][6];
char array2[6][6];
char store;
void record1()
{
	outRead.open("record1.txt");
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				outRead >> store;
				array1[i][j] = store;
			}
		}
	
	outRead.close();
}
void record2()
{
	 outRead.open("record2.txt");
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				outRead >> store;
				array2[i][j] = store;
			}
		}
	outRead.close();
}
void compare()
{
	int count1, count2 = 0;
	char check;
	cout << "The unique entries are " << endl;
	input.open("output.txt", ios::app);
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			check = array1[i][j];
			for (int l = 0; l < 6; ++l)
			{
				count1 = 0;
				for (int k = 0; k < 6; ++k)
				{
					if (check == array2[l][k])
					{
						++count1;
						break;
					}
				}
				if (count1 != 0)
					break;
			}
			if (count1 == 0)
			{
				cout << check << endl;
				input << check << " ";
			}
		}
	}
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			check = array2[i][j];
			for (int l = 0; l < 6; ++l)
			
				for (int k = 0; k < 6; ++k)
				{
					count1 = 0;
					if (check == array1[l][k])
					{
						++count1;
						break;
					}
				}
				if (count1 != 0)
					break;
		}
			if (count1 == 0)
			{
				cout << check << endl;
				input << check << " ";
			}
	
	}
	input.close();
}
int main()
{
	record1();
	record2();
	compare();
}