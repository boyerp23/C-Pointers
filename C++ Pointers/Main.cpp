//Creator: Paul Boyer
//contact: pauboyer@uat.edu
//CSC215 C/C++ Prog 1

//Allows input and output.
#include <iostream>
//Allows me to use strings.
#include <string>

//Used so that I don't have to type std:: for every line.
using namespace std;

//Declare / prototype functions.
void increaseCheckingBalance(int* ptr_checkingBalance);
void decreaseSavingsBalance(int* ptr_savingsBalance);

//Start
int main()
{
	//Title
	cout << "\n\n\t *** WELCOME TO THE UNIVERSE BANK ***\n\n";
	//Stores user name to memory.
	string userName;
	//Ask user to input their user name for login.
	cout << "Please enter your user name: \n";
	//Gets user name stored in memory.
	getline(cin, userName);
	//Stores pin number to memory.
	string userPinNumber;
	//Ask user to input their pin number.
	cout << "\nPlease enter your PIN: \n";
	//Gets pin number stored in memory.
	getline(cin, userPinNumber);
	//Display successful login for user.
	cout << "Login successful! " + userName + " You may proceed..\n\n";

	//Pause for user.
	system("pause");
	//Display to output the balances of both the checking and savings account.
	cout << "\n\n\t*** Balance Inquary ***\n";
	int checkingBalance = 1000;
	int savingsBalance = 10000;
	cout << "\nYour checking account balance is " << checkingBalance << endl;
	cout << "\nYour savings account balance is " << savingsBalance << endl;
	cout << "\nThe address of your checking account balance is " << &checkingBalance << endl;
	cout << "\nThe address of your checking account balance is " << &savingsBalance << endl;

	//Pause for user.
	system("pause");

	//First pointer pointing to the checking balance.
	// & = address of operator - same symbol as referace, but have no relations - AT ALL!!
	// int"*" is decalring the checking account balance varible.
	int* ptr_checkingBalance = &checkingBalance;
	cout << "\nThe value of ptr_checkingBalance is " << ptr_checkingBalance << endl;
	// dereferancing operator "*" will show the value of the checking balance rather than the address where the balance is located.
	cout << "\nThe value of " << *ptr_checkingBalance << " at the address " << ptr_checkingBalance << endl;

	//Pause for user.
	system("pause");

	//Second pointer pointing to the savings balance.
	// & = address of operator - same symbol as referace, but have no relations - AT ALL!!
	// int"*" is decalring the savings account balance varible.
	int* ptr_savingsBalance = &savingsBalance;
	cout << "\nThe value of ptr_checkingBalance is " << ptr_savingsBalance << endl;
	// dereferancing operator "*" will show the value of the savings balance rather than the address where the balance is located.
	cout << "\nThe value of " << *ptr_savingsBalance << " at the address " << ptr_savingsBalance << endl;

	//Pause for user.
	system("pause");

	//Transfer money from one account to the other.
	cout << "\nTransfer $500 from savings to checking.\n";
	//Calling the increaseCheckingBalance function.
	void increaseCheckingBalance(int* ptr_checkingBalance);
	//Calling the decreaseSavingsBalance function.
	void decreaseSavingsBalance(int* ptr_savingsBalance);
	//Display to output the transfer is complete
	cout << "\nTransfer complete from savings to checking " << endl;

	//Pause for user.
	system("pause");

	//Dereferance pointers to checking and savings balances to show the increase and decrease in account balances.
	*ptr_checkingBalance = 1500;
	*ptr_savingsBalance = 9500;
	//Display to output the account balances.
	cout << "\nThe account balance in checking is " << checkingBalance << endl;
	cout << "\nThe value of " << *ptr_checkingBalance << " at the address " << ptr_checkingBalance << endl;
	cout << "\nThe account balance in savings is " << savingsBalance << endl;
	cout << "\nThe value " << *ptr_savingsBalance << " at the address " << ptr_savingsBalance << endl;

	//Pause for user.
	system("pause");

	//End.
	return 0;
}

//Declared / prototyped functions.
void increaseCheckingBalance(int* ptr_checkingBalance)
{
	*ptr_checkingBalance = *ptr_checkingBalance;
}
void decreaseSavingsBalance(int* ptr_savingsBalance)
{
	*ptr_savingsBalance = *ptr_savingsBalance;
}