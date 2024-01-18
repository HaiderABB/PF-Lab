#include<iostream>
using namespace std;
int main()
{
	double perOfOccupied;
	int floors, sumOfRooms = 0, sumOfRooms1 = 0, rooms, rooms1, rooms2, count1 = 1;
	cout << "Enter the number of floors : " << endl;
	cin >> floors;
	while (count1 <= floors)
	{
		if (count1 == 13)
		{
			++count1;
		}
		cout << "Enter the total number of rooms on " << count1 << " floor" << endl;
		cin >> rooms;
		++count1;
		sumOfRooms1 = sumOfRooms1 + rooms;
		cout << "Enter the number of rooms occupied on floor:" << endl;
		cin >> rooms1;
		sumOfRooms = sumOfRooms + rooms1;
		cout << "----------------------------------------------------------------" << endl;
	}
	cout << "The total floors are = " << floors << endl;
	cout << "The total rooms are = " << sumOfRooms1 << endl;
	cout << "The total number of occupied rooms =" << sumOfRooms << endl;
	perOfOccupied = (float)(sumOfRooms * 100) / (float)sumOfRooms1;
	cout << "The total percentage of occupied rooms is = " << perOfOccupied;
	cout << "----------------------------------------------------------------" << endl;
}