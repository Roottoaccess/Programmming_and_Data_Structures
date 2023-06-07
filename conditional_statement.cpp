# include <iostream>
using namespace std;
int main()
{
	// This is a program of finding the given number is positive or negative number
	// Here we have seen that how we can take an input from users also
	cout << "Enter any number you want: ";
	int x;
	cin >> x;
	if(x > 0){
		cout << "Your entered number is a positive number !";
	}
	else if(x == 0){
		cout << "Your entered number is 0 which is not positive as well as not negative !";
	}
	else{
		cout << "Your entered number is a negative number !";
	}
}
