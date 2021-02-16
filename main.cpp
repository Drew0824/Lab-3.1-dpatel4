#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	double itemPrice;	// contains the price of each item
	double totalBill;	// contains the total bill.

	cout << setprecision (2) << fixed; 	// formatted output 
	
	cout << "Please input the number of items bought\n";
	cin >> quantity;

  cout << "Please input the price of each item you bought\n";
	cin >> itemPrice;

  totalBill= itemPrice * quantity;

  cout << "The total bill is $ \n" << totalBill;
	cin >> totalBill; 

  
	// Fill in the output statement to print total bill,
	// with a label to the screen.


}