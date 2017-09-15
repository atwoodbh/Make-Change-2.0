// Make Change 2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
	bool purchasing = true;
	while (purchasing) {
		char response;
		double cost;
		double amountpaid;
		double amountpaid1;
		double change;

		cout << "Enter cost of Food/Drink item: ";
		cin >> cost;
		cout << "Enter amount paid: ";
		cin >> amountpaid;

		while (amountpaid < cost) {

			double additionalchange;
			additionalchange = cost - amountpaid;
			cout << "You still need an additional: $" << additionalchange << endl;
			cout << "Add more money" << endl;
			cin >> amountpaid1;
			amountpaid += amountpaid1;

		}
	    cout << "Here is your change, thank you!" << endl;
		change = amountpaid - cost;
		int  dollar = change / 1;
		change = change - (1 * dollar);

		double modQuarter = change / .25;
		int quarter = modQuarter;
		change = change - (.25 * quarter);

		double modDime = change / .10;
		int dime = modDime;
		change = change - (.1 * dime);

		double modNickel = change / .05;
		int nickel = modNickel;
		change = change - (.05 * nickel);


		if (dollar) {
			cout << "Dollars = " << dollar << endl;
		}

		if (quarter) {
			cout << "Quarters = " << quarter << endl;
		}

		if (dime) {
			cout << "Dimes = " << dime << endl;
		}

		if (nickel) {
			cout << "Nickels = " << nickel << endl;
		}

		cout << "Would you like anything else (Y/N)?" << endl;
		cin >> response;

		if (response == 'N' || response == 'n')
		{
			cout << "Next Transaction" << endl;
			purchasing = false;
		}

		else if (response == 'Y' || response == 'y')
		{
			cout << "Next Transaction" << endl;
		}
		else {
			cout << "Invalid response, ending transaction" << endl;
			purchasing = false;
		}
	}
	return 0;
}