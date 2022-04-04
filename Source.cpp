#include <iostream>
using namespace std;

void menu() {
	cout << "**********MENU**********" << endl;
	cout << "1.Check balance" << endl;
	cout << "2.Deposit cash" << endl;
	cout << "3.Withdraw cash" << endl;
	cout << "4.Exit" << endl;
	cout << "********************" << endl;
}


int main() {
	int option;
	double balance = 750;


	do {
		menu();
		cout << "Option:";
		cin >> option;

		switch (option) {
		case 1:
			cout << "Balance : " << "$" << balance << endl;
			break;

		case 2:
			double deposit;
			cout << "Enter deposit amount: ";
			cin >> deposit;
			balance += deposit;
			break;

		case 3:
			double withdrawal;
			cout << "Enter withdrawal amount: ";
			cin >> withdrawal;
			if (withdrawal > balance)
				cout << "Not  enough money!!!";
			else
			{
				balance -= withdrawal;
			}
			break;
		};

	} while (option != 4);


	//system("pause>0");
}