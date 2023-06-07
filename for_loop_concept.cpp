# include <iostream>
using namespace std;
int main()
{
//	 Write a program to print I am a programmer 5 times using for loop
//	for(int i = 0; i < 5; i++)
//	{
//		cout << "I am a programmer";
//		cout << "\n";
//	}
//	
//	 Succesfully done the first program
//	 Now wap to print the multiplication table of any number
	int num;
	cout << "Enter any number of your choice: ";
	cin >> num;
	for(int i = 1; i <= 10; i++)
	{
		int result = num * i;
		cout << num << "X" << i << "=" << result << endl;
//		cout << "\n"; where as endl means new line;
	}
}
