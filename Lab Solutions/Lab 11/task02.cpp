//#include<iostream>
//#include<fstream>
//#include<cstring>
//#include<string>
//using namespace std;
//int main()
//{
//	char decode;
//	char alpha;
//	ofstream output;
//	ifstream input;
//	string str;
//	char array[101];
//	cout << "------------------------------" << endl;
//	cout << "Function " << "         DIGIT" << endl;
//	cout << "Encrypt Data" << "        1" << endl;
//	cout << "Decrypt Data" << "        2" << endl;
//	cout << "------------------------------" << endl;
//	int option;
//	cout << "Enter option " << endl;
//	cin >> option;
//	if (option == 1)
//	{
//		output.open("Input.txt",ios::app);
//		cout << "Enter a string " << endl;
//		cin.ignore();
//		cin.getline(array, 100);
//		for (int i = 0; array[i] != '\0'; ++i)
//		{
//			output << array[i];
//		}
//		output.close();
//		output.open("Encrypt.txt",ios::app);
//		for (int j = 0; array[j] != '\0'; ++j)
//		{
//			char ch;
//			ch = array[j] + 1;
//			output << ch;
//		}
//		output.close();
//		cout << "Encrypted, Check file" << endl;
//	}
//	else if (option == 2)
//	{
//		
//		int k = 0;
//		input.open("Encrypt.txt");
//		if(input.fail() || (!input))
//		{
//			input.close();
//			cout << "Enter some data on to the file first " << endl;
//			output.open("Encrypt.txt", ios::app);
//			cin.ignore();
//			cin.getline(array, 100);
//			for (int j = 0; array[j] != '\0'; ++j)
//			{
//				char ch;
//				ch = array[j] + 1;
//				output << ch;
//			}
//			output.close();
//		}
//		input.open("Encrypt.txt");
//		while (!input.eof())
//		{
//			input >> array[k];
//			++k;
//		}
//		input.close();
//		output.open("Decrypt.txt");
//		for (int k = 0; array[k] != '\0'; ++k)
//		{
//			char ch = array[k];
//			--ch;
//			output << ch;
//		}
//		output.close();
//		cout << "Decrypted, check file " << endl;
//	}
//}