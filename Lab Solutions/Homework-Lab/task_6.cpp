//#include<iostream>
//using namespace std;
//int  search(int array[], int size, int num)
//{
//	int loc = -1;
//	for (int j = 0; j < size; ++j)
//	{
//		if (array[j] == num)
//		{
//			loc = j;
//		}
//	}
//	if (loc == -1)
//		return -1;
//	else
//		return loc;
//}
//int main()
//{
//	int array[8], num, index;
//	cout << "Initialize the array : " << endl;
//	int s;
//	s = sizeof(array) / sizeof(int);
//	for (int i = 0; i < s; ++i)
//	{
//		cin >> array[i];
//	}
//	cout << "Enter the number you want to find " << endl;
//	cin >> num;
//	cout << "--------------------------------------------------------------" << endl;
//	cout << "-1 means the value is not found at any index " << endl;
//	index = search(array, s, num);
//	if (index == -1)
//		cout << "Value not found" << endl;
//	else
//		cout << "Value found at index " << index << endl;
//}