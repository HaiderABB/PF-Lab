//#include<iostream>
//using namespace std;
//int main()
//{
//	float salary1, salary2, tax1, increment1, tax2, increment2, totalSalary1, totalSalary2, newSalary1, newSalary2; 
//	//declared data types of the increment made in salary as well as the tax deduction done on it
//	
//	cout << "Enter salary : " << endl;
//	cin >> salary1;
//
//	increment1 = (3 * salary1) / 100;
//	newSalary1 = salary1 + increment1;
//	tax1 = (newSalary1 * 1.5) / 100;
//	totalSalary1 = increment1 + salary1 - tax1;
//	//Uses the formula of calculation of percentage and displays the total salary after increment and tax deduction
//
//	cout << "Your gross salary for 5 years with 3% increment and 1.5% tax reduction is = " << totalSalary1 << endl;
//	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	salary2 = salary1;
//	increment2 = (14 * salary2) / 100;
//	newSalary2 = salary2 + increment2;
//	tax2 = (newSalary2 * 10) / 100;
//	totalSalary2 = increment2 + salary2 - tax2;
//	//Using the same formula we calculate the salary for 2nd case
//
//	cout << "Now for Calculating salary for 5 years with 14% increment and 10% tax reduction is =" << totalSalary2 << endl;
//
//	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	cout << "Now for calculating salaries for 5 years with different Taxes and Increments each year : " << endl;
//	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
//	float salary3, tax3, tax4, increment3, increment4, newSalary3, newSalary4, totalSalary3, totalSalary4;
//   //declared data types for increment and deduction
//	salary3 = salary2;
//
//	increment3 = (3 * salary3) / 100;
//	newSalary3 = salary3 + increment3;
//	tax3 = (1.5 * newSalary3) / 100;
//	totalSalary3 = newSalary3 - tax3;
//	//Using same formula we calculate the salary in the first year and so on until five
//
//	cout << "The first year salary is = " << totalSalary3 << endl;
//	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
//	
//	increment4 = (14 * totalSalary3) / 100;
//	newSalary4 = increment4 + totalSalary3;
//	tax4 = (10 * newSalary4) / 100;
//	totalSalary4 = newSalary4 - tax4;
//
//	
//
//	cout << "The 2nd year salary is = " << totalSalary4 << endl;
//	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
//	
//	float increment5, tax5, newSalary5, totalSalary5;
//	
//	increment5 = (totalSalary4 * 3) / 100;
//	newSalary5 = increment5 + totalSalary4;
//	tax5 = (newSalary5 * 1.5) / 100;
//	totalSalary5 = newSalary5 - tax5;
//    cout << "The 3rd year salary is = " << totalSalary5 << endl;
//	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	float increment6, tax6, newSalary6, totalSalary6;
//
//	increment6 = (totalSalary5 * 14) / 100;
//	newSalary6 = increment6 + totalSalary5;
//	tax6 = (newSalary6 * 10) / 100;
//	totalSalary6 = newSalary6 - tax6;
//	
//	cout << "The 4th year salary is = " << totalSalary6 << endl;
//
//	cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	float increment7, tax7, newSalary7, totalSalary7;
//	
//	increment7 = (totalSalary6 * 3) / 100;
//	newSalary7 = totalSalary6 + increment7;
//	tax7 = (newSalary7 * 1.5) / 100;
//	totalSalary7 = newSalary7 - tax7;
//
//
//	cout << "The 5th year salary is = " << totalSalary7 << endl;
//	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	float totalGrossSalary;
//	totalGrossSalary = totalSalary7 + totalSalary6 + totalSalary5 + totalSalary4 + totalSalary3;
//
//	cout << "The Total gross salary for 5 years is = " << totalGrossSalary << endl;
//	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
//	
//	int even;//data type for even variable 
//	even=(int)totalGrossSalary % 2 == 0;//type-casting used because modulus works only with integer data type
//	cout << "Now to check if the gross salary is even or odd we put a condition and if it is even then result is 1 and if its odd it is zero" << "\n";
//
//	cout << "The result is = " << even << "\n";
//	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	
//
//
//	cout << "haider abbas moazzam, 22l-7862" << endl;
//	system("pause");
//
//
//
//}