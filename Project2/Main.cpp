#include <iostream>
#include <string>

using namespace std;

int main() {

	double hoursWorked = 0;
	double tip = 0;

	double totalGross = 0;
	double totalNet = 0;

	double fedIncomeTax = .08167565;
	double FICA = 0.06199924;
	double Medicare = 0.01449613;
	double SDIWithholding = 0.01023104;
	double StateWithholding = 0.01534224;



	cout << "Hello and welcome to the first iteration of the Server tip calculator!\n";
	cout << "Please enter how many hours you worked this pay period: ";
	cin >> hoursWorked;
	cout << "\nNow enter how much you earned in tip: ";
	cin >> tip;

	totalGross = tip + (hoursWorked * 12);

	cout << "\nYour total gross income is: " << totalGross;

	double total_tax = 0;

	total_tax += (totalGross * fedIncomeTax);
	total_tax += (totalGross * FICA);
	total_tax += (totalGross * Medicare);
	total_tax += (totalGross * SDIWithholding);
	total_tax += (totalGross * StateWithholding);

	totalNet = totalGross - total_tax;
	totalNet -= tip;

	cout << "\nYou're total income to expect in your check is: $" << totalNet;


	


	return 0;
}