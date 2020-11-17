// Sarah Wathke
// Software Design
// Simple software that when a user runs, shows them a vacation package that they have won
// user has the option of bringing guests on their vacation.
// user is prompted to input how many people they will be bringing (up to four) 
// error checking implemented by ensuring that no improper number is accepted 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void displayMenu();
void resultDisplay(int selection);
void howManyPeople(int numPeople, int selection);
void disneyVacationValue(int numPeople);
void hawaiiVacationValue(int numPeople);
void myrtleVacationValue(int numPeople);
void holidayVacationValue(int numPeople);

int main()
{
	displayMenu();

	//variable to allow for exit if user desires
	int answer = 0;

	cout << "Please enter 1 if you would like to continue.\n" << endl;
	cout << "To exit, press any other key." << endl;
	cin >> answer;

	while (answer == 1)
	{

		// system pause so that the user does not immediately see what they have won
		system("PAUSE");

		// variable that will hold the value of the randomly selected vacation (a number 1-5)
		srand((unsigned)time(0));
		int selection = (rand() % 4) + 1;

		// variable for number of guests and winner's self
		int numPeople = 0;

		// function that will display which vacation was randomly chosen
		resultDisplay(selection);
		howManyPeople(numPeople, selection);


		// allow the program to run again if another user is to be entered or exit the program
		cout << "Please enter 1 if you would like to continue\n" << endl;
		cin >> answer;

		displayMenu();

	

	}

	return 0;
}

// function that will display the details of whichever vacation user selects
// information not yet included: inclusions of the package and rates of stay
void resultDisplay(int selection)
{

	switch (selection)
	{
	case 1: cout << "\nCongratulations on your Disney Vacation!\n" << endl;
		break;
	case 2: cout << "\nCongratulations on your Myrtle's Plantation Vacation!\n" << endl;
		break;
	case 3: cout << "\nCongratulations on your Hawaiian Vacation!\n" << endl;
		break;
	case 4: cout << "\nCongratulation on your Holiday Inn Vacation!\n" << endl;
		break;
	default: cout << "ERROR";

	}


}

// function that will display the welcome message 
void displayMenu()
{
	cout << "Congratulations on being chosen for the Wathke Christmas Vacation sweepstakes!\n"
		"Your vacation will be randomly generated from a list of selected destinations.\n"
		"May the odds be ever in your favor, and Merry Christmas! \n";
	cout << endl;
	cout << "Press any key to find out which one you have won!\n" << endl;

}

// function that takes in a value given by the user of the amount of people 
// that will be attending the prize vacation
void howManyPeople(int numPeople, int selection)
{
	cout << "Please enter in the number of people that will be accompanying you plus yourself.\n";
	cout << "Only enter a number 1 through 5." << endl;
	cout << "You are allowed up to four guests." << endl;
	// loop to ensure that user enters a valid number 
	while (numPeople > 5 || numPeople < 1)
	{
		cout << "Enter a number 1 through 5." << endl;
		cin >> numPeople;
	}

	if (selection == 1)
	{
		disneyVacationValue(numPeople);
	}
	if (selection == 2)
	{
		myrtleVacationValue(numPeople);
	}
	if (selection == 3)
	{
		hawaiiVacationValue(numPeople);
	}

	if (selection == 4)
	{
		holidayVacationValue(numPeople);
	}
	
}
// function that will print out the details of the estimated cost of the vacation won
void disneyVacationValue(int numPeople)
{
	switch (numPeople)
	{
	case 1: cout << "Your estimated retail value for your special Disney vacation comes out to approximately \n"
		"$1,268!  This will include a six night and seven day stay." << endl;
		break;
	case 2: cout << "Your estimated retail value for your special Disney vacation comes out to approximately \n"
		"$2,537!  This will include a six night and seven day stay for you and your chosen guest." << endl;
		break;
	case 3: cout << "Your estimated retail value for your special Disney vacation comes out to approximately \n"
		"$3,804!  This will include a six night and seven day stay for you and your 2 chosen guests." << endl;
		break;
	case 4: cout << "Your estimated retail value for your speical Disney vacation comes out to approximately \n"
		"$5,072!  This will include a six night and seven day stay for you and your 3 chosen guests." << endl;
		break;
	case 5: cout << "Your estimated retail value for your special Disney vacaton comes o ut to approximately \n"
		"$6,340!  This will include a six night and seven day stay for you and your 4 chosen guests." << endl; 
		break;
	default: cout << "invalid" << endl;
	}
}

void hawaiiVacationValue(int numPeople)
{
	switch (numPeople)
	{
	case 1: cout << "Your estimated retail value for your luxury Hawaiian vacation comes out to approximately \n"
		"$5,454!  This will include a week's stay, covering all food, transportation, and stay costs." << endl;
		break;
	case 2: cout << "Your estimated retail value for your luxury Hawaiian vacation comes out to approximately \n"
		"$10,908! This will include a week's stay, covering all food, transportaiton, and stay costs for yourself\n"
		"and a guest." << endl;
		break;
	case 3: cout << "Your estimated retail value for your luxury Hawaiian vacation comes out to approximately \n"
		"$16,362! This will include a week's stay, covering all food, transportation, and stay costs for yourself\n"
		"and two guests." << endl;
		break;
	case 4: cout << "Your estimated retail value for your luxury Hawaiian vacaction comes out to approximately \n"
		"$21,816! This will include a week's stay, covering all food, transortation, and stay costs for yourself\n"
		"and three guests." << endl;
		break;
	case 5: cout << "Your estimated retail value for your luxury Hawaiian vacaction comes out to approximately \n"
		"$27,270! This will include a week's stay, covering all food, transortation, and stay costs for yourself\n"
		"and four guests." << endl;
	}

}

void myrtleVacationValue(int numPeople)
{
	switch (numPeople)
	{
	case 1: cout << "Your estimated retail value for your Myrtles Plantation Vacation is apporimately $1000!\n"
		"Your one night stay in Judge Clark Woodruff's suite is almost $300 for the night. That leaves you with about\n"
		"$700 to indulge in gifts from the gift shop as well as any meals or activities you may encounter." << endl;
		break;
	case 2: cout << "Your estimated retail value for your Myrtles Plantation Vacation is apporimately $1000!\n"
		"Your one night stay in Judge Clark Woodruff's suite is almost $300 for the night. That leaves you with about\n"
		"$700 to indulge in gifts from the gift shop as well as any meals or activities you may encounter." << endl;
		cout << "As quoted by the site: The Judge Clarke Woodruff Suite is located on the second floor of the mansion. It\n"
			"is our largest and most private suite.The suite has a queen size four - poster bed and a private bathroom with a\n"
			"bathtub en suite.Access to this room is limited to ONLY the two overnight guests listed on the reservation.It has a large\n"
			"private sitting area near the staircase on which William Winter died in 1871 on the seventeenth step.\n";
		break;
	case 3: cout << "Your estimated retail value for your Myrtles Plantation Vacation is approximately $1000!\n"
		"Your one night stay in the Caretaker's Quarters is approximately $240 for the night. That leave you will plenty of money to\n"
		"indulge in gifts from the gift shop as well as any meals or activities you may encounter." << endl;
		cout << "As quoted by the site: The Caretaker’s Quarters is a cozy, rustic cottage located about 30 yards behind the General’s Store.\n"
			"It has two queen size beds in the sleeping area and features a private bathroom with a shower. It accommodates a maximum of 4 people.\n"
			"This accommodation is best known for having been featured on Ghost Hunters television program.";
	case 4:cout << "Your estimated retail value for your Myrtles Plantation Vacation is approximately $1000!\n"
		"Your one night stay in the Caretaker's Quarters is approximately $240 for the night. That leave you will plenty of money to\n"
		"indulge in gifts from the gift shop as well as any meals or activities you may encounter." << endl;
		cout << "As quoted by the site: The Caretaker’s Quarters is a cozy, rustic cottage located about 30 yards behind the General’s Store.\n"
			"It has two queen size beds in the sleeping area and features a private bathroom with a shower. It accommodates a maximum of 4 people.\n"
			"This accommodation is best known for having been featured on Ghost Hunters television program.";
		break;
	case 5: cout << "You and your four guests will share two rooms: The Ruffin Stirling Room and the Fannie Williams Room.\n"
		"Your one night stay for both rooms will be approximately $330!  You will be given\n a $800 visa card to cover any indulgent costs"
		"you desire, such as meals or gifts from the gift shop." << endl;
		cout << "As quoted by the site, The Fannie Williams Room is located on the second floor of the mansion. It has a queen size four poster\n"
			"bed. It has a private bathroom with a shower located about 20 feet from the room. It shares a spacious sitting area with\n"
			"The Ruffin Stirling, The William Winter and The John Leake accommodations. This room is fondly referred to as the ‘Doll Room’.\n"
			"The Ruffin Stirling Room is located on the second floor of the mansion. It has one queen size four-poster bed and a private\n"
			"bathroom with a shower located about 20 feet from this room. It shares a spacious sitting area with The Fannie Williams,\n"
			"The John Leake and The William Winter accommodations." << endl;
		break;
	default: cout << "invalid";
	}
}

void holidayVacationValue(int numPeople)
{
	switch (numPeople)
	{
	case 1: cout << "Your estimated retail value for your vacation to the Holiday Inn in the beautiful Gulfport, MS is approximately\n"
		"$700!  You will be provided a full week's stay at this quaint resort.  We will also provide you with a $500 Visa gift card to cover meals\n"
		"and souvenirs!" << endl;
		cout << "As quoted by the hotel site, 'Enjoy a range of recreational amenities, including an indoor pool, a spa tub, and a 24 - hour\n"
			"fitness center.Additional amenities at this hotel include complimentary wireless Internet access, wedding services, and a fireplace\n"
			"in the lobby.If you're ready for some gaming fun, you can hop on the complimentary casino shuttle." << endl;
		break;
	case 2: // same as 4
		
	case 3: // same as 4
		
	case 4: cout << "Your estimated retail value for you and your" << (numPeople - 1) << "guest's vacation to the Holiday Inn in the beautiful\n"
		"Gulfport, MS is approximately $700!  You will be provided a full week's stay at this quaint resort.\n"
		"We will also provide you with a $500 Visa gift card to cover meals "
		"and souvenirs!  Your room will have two queen sized beds." << endl;
		cout << "As quoted by the hotel site, 'Enjoy a range of recreational amenities, including an indoor pool, a spa tub, and a 24 - hour\n"
			"fitness center.Additional amenities at this hotel include complimentary wireless Internet access, wedding services, and a fireplace\n"
			"in the lobby.If you're ready for some gaming fun, you can hop on the complimentary casino shuttle." << endl;
		break;
	case 5: cout << "Your estimated retail value for you and your" << (numPeople - 1) << "guest's vacation to the Holiday Inn in the beautiful\n"
		"Gulfport, MS is approximately $1400!  You will be provided a full week's stay at this quaint resort.\n"
		"Two rooms will be provided to accomodate your party."
		"We will also provide you with a $500 Visa gift card to cover meals "
		"and souvenirs!  Your room will have two queen sized beds." << endl;
		cout << "As quoted by the hotel site, 'Enjoy a range of recreational amenities, including an indoor pool, a spa tub, and a 24 - hour\n"
			"fitness center.Additional amenities at this hotel include complimentary wireless Internet access, wedding services, and a fireplace\n"
			"in the lobby.If you're ready for some gaming fun, you can hop on the complimentary casino shuttle." << endl;
		break;
	default: cout << "invalid";
	}


}

