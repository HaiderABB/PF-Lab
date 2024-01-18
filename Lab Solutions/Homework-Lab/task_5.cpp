//#include<iostream>
//using namespace std;
//void input(int array[], int s)
//{
//	for (int i = 0; i < s; ++i)
//	{
//		cin >> array[i];
//	}
//}
//void bubble_sort(int array[], int s)
//{
//	int temp;
//	for (int i = 0; i < s; ++i)
//	{
//		for (int j = 0; j < s - 1; ++j)
//		{
//			if (array[j] > array[j + 1])
//			{
//				temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int array[8];
//	int s = sizeof(array) / sizeof(int);
//	cout << "Enter the values for each index " << endl;
//	input(array, s);
//	bubble_sort(array, s);
//	cout << "After buuble sort the array becomes" << endl;
//	for (int n = 0; n < s; ++n)
//	{
//		cout << array[n] << "\t";
//	}
//}