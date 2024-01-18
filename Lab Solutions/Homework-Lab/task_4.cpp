//#include<iostream>
//using namespace std;
//void input(int array[],int s)
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
//		 for (int j = 0; j < s-1; ++j)
//		 {
//			 if (array[j] > array[j + 1])
//			 {
//				 temp = array[j];
//				 array[j] = array[j + 1];
//				 array[j + 1] = temp;
//			 }
//		 }
//	}
//}
//void binary_search(int array[], int end,int num)
//{
//	
//	int s = 0, e = end - 1, mid, check = 0;
//		while (s <= e)
//		{
//			mid = (s + e) / 2;
//			if (array[mid] == num)
//			{
//				cout << "Value Found at index " << mid << endl;
//				check = 1;
//				break;
//			}
//			else if (array[mid] >= num)
//			{
//				e = mid - 1;
//			}
//			else
//			{
//				s = mid + 1;
//			}
//		}
//		if (check == 0)
//			cout << "Number not found at any index" << endl;
//		
//}
//int main()
//{
//	int array[8];
//	int s = sizeof(array) / sizeof(int);
//	cout << "Enter the values for each index " << endl;
//	input(array, s);
//	
//	cout << "For binary search first we sort the array and the array becomes " << endl;
//	bubble_sort(array, s);
//	for (int n = 0; n < s; ++n)
//	{
//		cout << array[n] << "\t";
//	}
//	cout << endl;
//	cout << "Enter the number you want to find in the array " << endl;
//	int num;
//	cin >> num;
//	binary_search(array, s, num);
//}