#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


int main()
{
	//employee information
	int identity1 = 1;
	int	identity2 = 2;
	int	identity3 = 3;
	string employee1 = "Archibald";
	string employee2 = "David";
	string employee3 = "Norah";
	float sale1 = 1500.23f;
	float sale2 = 478.00f;
	float sale3 = 1745.99f;

	//sales report output
	cout << "ID" << setw(20) << "Name" << setw(35) << "Daily Sales Balance" <<endl;
	cout << setw(90) << setfill('-') << "-" << endl;
	cout << setw(5) << setfill('0') << identity1 << setw(19) << setfill(' ') << employee1 << setw(20) << "$" << fixed << setprecision(2) << sale1 << endl;
	cout << setw(5) << setfill('0') << identity2 << setw(17) << setfill(' ') << employee2 << setw(22) << right << "$" << fixed << setprecision(2) <<sale2 << endl;
	cout << setw(5) << setfill('0') << identity3 << setw(17) << setfill(' ') << employee3 << setw(22) << "$" << fixed << setprecision(2) << sale3 << endl;

	return 0;
}
