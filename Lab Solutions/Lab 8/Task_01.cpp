//#include<iostream>
//using namespace std;
//void getData(int task01[],int size1)
//{
//	for (int count = 0; count < size1; ++count)
//	{
//		cout << "Enter the value for index " << count << endl;
//		cin >> task01[count];
//	}
//}
//void countEven(int even[],int size2)
//{
//	int even1, check = 0;
//	int array[] = { 0 };
//	for (int count = 0; count < size2; ++count)
//	{
//		even1 = even[count];
//		if (even1 % 2 == 0&&even1>0)
//		{
//			cout << "The even values in the Array entered by the user are = " << even1 << ", " << endl;
//			++check;
//		}
//	
//	}
//	if (check == 0)
//		cout << "There are no even values entered in the array" << endl;
//	cout << "====================================================================" << endl;
//}
//void findMinMax(int array[], int size3)
//{
//	int maxIndex = 0;
//	for (int index = 1; index < size3; ++index)
//	{
//		if (array[maxIndex] < array[index])
//		{
//			maxIndex = index;
//		}
//	}
//	int minIndex = 0;
//	for (int index1 = 1; index1 < size3; ++index1)
//	{
//		if (array[minIndex] > array[index1])
//		{
//			minIndex = index1;
//		}
//	}
//	cout << "The largest number in the array is = " << array[maxIndex] << endl;
//	cout << "The smallest number in the array is = " << array[minIndex] << endl;
//	cout << "====================================================================" << endl;
//
//}
//void searchData(int array01[],int size4)
//{
//	int check, value, check1 = 0;
//	cout << "Enter the value you want to search in the array " << endl;
//	cin >> check;
//	for (int count = 0; count < size4; ++count)
//	{
//		value = array01[count];
//		if (value == check)
//		{
//			cout << "The value is found at index " << count << endl;
//			++check1;
//		}
//	}
//	if (check1 == 0)
//	{
//		cout << "The value entered is not found at any index" << endl;
//	}
//}
//int main()
//{
//	int task[6], min, max, size;
//	size = sizeof(task) / sizeof(size);
//    getData(task,size);
//	countEven(task,size);
//	findMinMax(task,size);
//	searchData(task,size);
//}