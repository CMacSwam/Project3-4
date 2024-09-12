/*
File: P3-4
Author: Chase McCluskey
Date 9/12/2024

Description: Calculates cost of ownership of a car

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int carcost;
	double mpg;
	int miles;
	double gasprice;
	int yearsused;
	int resalevalue;
	int totalcost;

	cout << "Enter the cost of car:";
	cin >> carcost;
	cout << "Enter MPG: ";
	cin >> mpg;
	cout << "Enter miles driven per year: ";
	cin >> miles;
	cout << "Enter gas price: ";
	cin >> gasprice;
	cout << "Enter years of use: ";
	cin >> yearsused;
	cout << "Enter the resale amount: ";
	cin >> resalevalue;
	cout << endl;
	totalcost = carcost + ((miles) / mpg * gasprice) * yearsused - resalevalue;
	cout << "Net cost of car ownership: " << totalcost;
}