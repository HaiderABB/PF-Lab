//#include<iostream>
//using namespace std;
//const int size1 = 10;
//void getData(int first[])
//{
//	for (int count = 0; count < size1; ++count)
//	{
//		cout << "Enter the  value for index " << count << endl;
//		cin >> first[count];
//	}
//	cout << "==============================================" << endl;
//}
//void sort(int second[])
//{
//	int swapElement;
//	
//	for (int count = 0; count < size1; ++count)
//	{
//		for (int count1 = count+1; count1 < size1; ++count1)
//		{
//			if (second[count1] < second[count])
//			{
//				swapElement = second[count];
//				second[count] = second[count1];
//				second[count1] = swapElement;
//			}
//		}
//	}
//	cout << "The sorted array is " << endl;
//	for (int count = 0; count < size1; ++count)
//	{
//		cout << second[count] << ",    ";
//	}
//}
//void searchData(int third[])
//{
//	int size;
//	int solo = 0;
//	int lowerBound, upperBound;
//	lowerBound = 0;
//	upperBound = size1 - 1;
//	int checkss = 0;
//	size = size1 / 2;
//	int check, check1 = 1;
//	cout << "Enter the number you want to search " << endl;
//	cin >> check;
//	if (check == third[size])
//	{
//		cout << "The number is found at index " << size << endl;
//	}
//	while (checkss != 0)
//	{
//		if (check > third[size])
//		{
//			while (check1 != 0)
//			{
//				if (check > third[size])
//				{
//					lowerBound = size;
//					upperBound = size1;
//					size = ((upperBound - lowerBound) / 2) + 1;
//					if (check == third[size])
//					{
//						cout << "The number is found at index " << size << endl;
//						check1 = 0;
//					}
//				}
//			}
//		}
//		else if (check < third[size])
//		{
//			while (check1 != 0)
//			{
//				if (check < third[size])
//				{
//					lowerBound = size;
//					upperBound = size1;
//					size = ((upperBound - lowerBound) / 2) + 1;
//					if (check == third[size])
//					{
//						cout << "The number is found at index " << size << endl;
//						check1 = 0;
//					}
//				}
//			}
//		}
//	}
//	for (int count11 = 0; count11 < size1; ++count11)
//	{
//		if (third[count11] == check)
//		{
//			++solo;
//			cout << "The number is found at index " << count11 << endl;
//			break;
//		}
//	}
//	if (solo == 0)
//		cout << "The number is not found at any index" << endl;
//}
//int main()
//{
//	int array[size1];
//	getData(array);
//	sort(array);
//	searchData(array);
//}