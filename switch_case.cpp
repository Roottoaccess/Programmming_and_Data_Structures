# include <iostream>
using namespace std;
int main()
{
	// Switch case control statement :-
	// WAP to take input from users from (1-10) and print the corresponding week days:-
	
		cout << "Enter any number from (1-7) to find its corresponding week days: ";
		int number;
			cin >> number;
			// Using the switch case we can perform the following task
		switch(number){
			case 1:
				cout << "Monday";
				break;
			case 2:
				cout << "Tuesday";
				break;
			case 3:
				cout << "Wednesday";
				break;
			case 4:
				cout << "Thursday";
				break;
			case 5:
				cout << "Friday";
				break;
			case 6:
				cout << "Saturday";
				break;
			case 7:
				cout << "Sunday";
				break;
			default:
				cout << "Please enter a currect input number";
		}
}
