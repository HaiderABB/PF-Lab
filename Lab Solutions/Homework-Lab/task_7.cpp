//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//bool palindrome(char array[], int s)
//{
//	int count = 0;
//	int i = 0;
//	for (int j = s - 1; j > 0; --j)
//	{
//		if (array[j] != array[i])
//			++count;
//		++i;
//	}
//	if (count == 0)
//		return true;
//	else
//		return false;
//}
//void input(char array[], int s, string str2)
//{
//	for (int i = 0; i < s; ++i)
//	{
//		array[i] = str2[i];
//	}
//	array[0] = char(tolower(array[0]));
//}
//int main()
//{
//	char array[60];
//	string str1;
//	cout << "Enter a string : " << endl;
//	getline(cin, str1);
//	int size;
//	cout << "Enter the number of characters in the string " << endl;
//	cin >> size;
//	input(array, size, str1);
//	bool check;
//	check = palindrome(array, size);
//	if (check == true)
//		cout << "It is a palindrome" << endl;
//	else
//		cout << "Not a palindrome " << endl;
//}
