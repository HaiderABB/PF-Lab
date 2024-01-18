#include<iostream>
#include<cstring>
#include<string>
using namespace std;
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
int main()
{
	char array[60];
	string str;
	cout << "Enter a string " << endl;
	getline(cin, str);
	int size;
	cout << "Enter the number of characters in the array " << endl;
	cin >> size;
	input(array, size, str);
	reverse_string(array, size);
}