#include <iostream>
#include "routeDelivery.h"

//the constructor
routeDelivery::routeDelivery()
{
	depot x
}










//INITIALLY DONE BEFORE USING CLASSES; REDO USING CLASSES
//using this as a template |
                           |
                           |
                           

using namespace std;

int main() { //take off after header function has been set

	int depotX; //take off when class is finished
	int depotY; //alsot take off when class is finished

	char choice;
	cout << "Enter 1 to enter route information from console" << endl;
	cout << "Enter 2 to enter route information from a file" << endl;
	cin >> choice;

	while (choice != '1' and choice != '2') {
		cout << "Invalid input. Enter 1 for console or Enter 2 for file: ";
		cin >> choice;
	}

	if (choice == '1') {
		cout << "Enter the depot coordinates for X (0 - 1000): " << endl;
		cin >> depotX;

		while (depotX < 0 or depotX > 1000) {
			cout << "That is an invalid input. Please enter a value between 0 and 1000: ";
			cin >> depotX;
		}

		cout << "Enter the depot coordinates for Y (0 - 1000): " << endl;
		cin >> depotY;

		while (depotY < 0 or depotY > 1000) {
			cout << "That is an invalid input. Please enter a value between 0 and 1000: ";
			cin >> depotY;
		}
		cout << "Depot coordinates have been set to: (" << depotX << ", " << depotY << ")" << endl;
	}
	else if (choice == '2') {
		cout << "great!" << endl;
	}
	else {
		cout << "Invalid choice. Please try again.";
	}

	return 0;





}
