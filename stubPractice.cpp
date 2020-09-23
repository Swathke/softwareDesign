// Need 10 menu items
// Need an exit item
// Error response for an invalid entry
// Display messages for the selections
// stating that they are incomplete as we
// are only stubbing
// Keep menu on display until the exit option is chosen

#include <iostream>

using namespace std;

void displayMenu();						
void resultDisplay(int selection);

int main()
{
	// variable that will hold the number of the vacation selection 
	int selection = 0;

		// loop that will consistently display the menu and call on the function 
		// that will display details of the vacation selected 
		while (selection != 10)
		{
			displayMenu();
			
			resultDisplay(selection);

			cin >> selection;

		}

	return 0;
}

// function that will display the details of whichever vacation user selects
// information not yet included: inclusions of the package and rates of stay
void resultDisplay(int selection)
{
	
		switch (selection)
		{
		case 0: // case 0 is the initial value that the selection is set to before user puts 
				// in a preference 
			break;
		case 1: cout << "\nDetails of the Disney Vacation incomplete at this time.\n" << endl;
			break;
		case 2: cout << "\nDetails of the Six Flags Vacation incomplete at this time.\n" << endl;
			break;
		case 3: cout << "\nDetails of the Hawaii Vacation incomplete at this time.\n" << endl;
			break;
		case 4: cout << "\nDetails of the Holiday Inn Vacation incomplete at this time.\n" << endl;
			break;
		case 5: cout << "\nDetails of the Italy Vacation incomplete at this time.\n" << endl;
			break;
		case 6: cout << "\nDetails of the Paris Vacation incomplete at this time.\n" << endl;
			break;
		case 7: cout << "\nDetails of the Mississippi Vacation incomplete at this time.\n" << endl;
			break;
		case 8: cout << "\nDetails of the Florida Vacation incomplete at this time.\n" << endl;
			break;
		case 9: cout << "\nDetails of the Disney Cruise Vacation incomplete at this time.\n" << endl;
			break;
		default: cout << "\nInvalid entry, please enter a number between 1 and 9 or 10 if you wish to exit.\n";
	
		}

		
}

// function that will display the vacation options to the user
// menu will be displayed at all times until the user exits
void displayMenu()
{
	cout << "The special vacation deals that Sarah's Vacations has to offer\n"
		"are as shown in the menu below.  Please enter in the number of the vacation deal that\n"
		"you would like to see.  Happy travels! \n";

	cout << " 1) Disney Vacation Package\n"
			" 2) Six Flags Vacation Package\n"
			" 3) Hawaii Vacation Package\n"
			" 4) Holiday Inn Vacation Package\n"
			" 5) Italy Vacation Package\n"
			" 6) Paris Vacation Package\n"
			" 7) Mississippi Vacation Package\n"
			" 8) Floriday Vacation Pacakage\n"
			" 9) Disney Cruise\n"
			"10) EXIT MENU\n";

}