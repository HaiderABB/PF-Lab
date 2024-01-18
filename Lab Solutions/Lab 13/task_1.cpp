//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int array1[4][4];
//	int transArray[4][4];
//	cout << "-----------------------" << endl;
//	ofstream input;
//	ifstream output;
//	int num;
//	cout << "Initialize the matrix" << endl;
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			cout << "Enter element for " << i+1 << " row and " << j+1 << " column" << endl;
//			cin >> num;
//			array1[i][j] = num;
//			cout << "\n";
//		}
//	}
//	cout << "----------------------------" << endl;
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			cout << array1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	input.open("Data.txt");
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			input << array1[i][j] << " ";
//		}
//		input << endl;
//	}
//	input.close();
//
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			transArray[i][j] = array1[j][i];
//		}
//	}
//	cout << "----------------------------" << endl;
//	input.open("Data.txt", ios::app);
//	input << endl;
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			input << array1[i][j] << " ";
//		}
//		input << endl;
//	}
//	input.close();
//	cout << "The matrix after transpose is " << endl;
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			cout << transArray[i][j] << " ";
//		}
//		cout << endl;
//	}
//}