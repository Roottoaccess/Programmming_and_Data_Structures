# include <iostream>
using namespace std;
int main()
{
	// Different types of operators in C++
	int num_one = 2;
	int num_two = 15;
	int result = 0;
	// Appling arithmetic operators
	result = num_one + num_two;
	cout << "The result of add is: "<<result;
	cout << "\n";
	result = num_one - num_two;
	cout << "The result of sub is: "<<result;
	cout << "\n";
	result = num_one * num_two;
	cout << "The result of mul is: "<<result;
	cout << "\n";
	result = num_two / num_one;
	cout << "The result of div is: "<<result;
	cout << "\n";
	// Appling relational operators
	int x = 25;
	int y = 24;
	int z = x != y;
	cout << "The result is true or not: "<<z;
	cout << "\n";
	// Appling logical operators
	int log_x = 12;
	int log_y = 14;
	
		if(log_x && log_y < 25){
			cout << "The both values less than 25";
		}
		else{
			cout << "The both values are not less than 25";
		}
		cout << "\n";
		
	if(log_x || log_y > 20){
		cout << "One of the value is greater than 20";
	}
	else 
	{
		cout << "neighther of the value is greater than 20";
	}
	cout << "\n";
	// misc operators
	int a = 5;
	cout<<"The size of integer a =  "<<sizeof(a);
	
	cout << "\n";
	// Ternary operator
	int first = 14;
	int second = 48;
	int operation = (first > second) ? first : second;
	cout << "Result: "<<operation;	
}

