//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ifstream input;
//	ofstream output;
//	int num;
//	output.open("Numbers.txt",ios::app);
//	int num1 = 1;
//	while (num1 != 0)
//	{
//		cout << "Enter a number " << endl;
//		cin >> num;
//		output << num << endl;
//		cout << "Enter 1 if you want to continue and 0 if you want to terminate " << endl;
//		cin >> num1;
//	}
//	int store;
//	output.close();
//	input.open("Numbers.txt");
//	while (!input.eof())
//	{
//		input >> num;
//		if (num % 2 != 0)
//		{
//			output.open("Odd.txt",ios::app);
//			output << num << endl;
//			output.close();
//		}
//		else
//		{
//			output.open("Even.txt",ios::app);
//			output << num << endl;
//			output.close();
//		}
//		
//	}
//
//}