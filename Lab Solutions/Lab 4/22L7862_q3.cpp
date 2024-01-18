//#include<iostream>
//using namespace std;
//int main()
//{
//	int num, neg, count, pos, zero = 0;
//	
//	neg = 0;
//	count = 0;
//	pos = 0;
//	float perneg, perpos, perzero;
//	perzero = 0;
//	perneg = 0;
//	perpos = 0;
//	cout << "enter numbers : " << endl;
//
//
//
//	while (cin>>num)
//	{
//		++count;
//
//		if (num == 0)
//		{
//
//			++zero;
//		}
//		
//		if (num > 0)
//		{
//			++pos;
//		}
//		
//		if (num < 0)
//		{
//			++neg;
//		}
//		
//
//	}
//	perpos = ((float)pos * 100) /(float) count;
//	perneg = ((float)neg * 100) /(float) count;
//	perzero = ((float)zero * 100) /(float) count;
//	
//	cout << "the percentage of positive numbers is = " << perpos << " percent" << endl;
//	cout << "the percentage of negative number is = " << perneg << " percent" << endl;
//	cout << "the percentage of zeros is = " << perzero << endl;
//	
//	cout << count;
//
//}