# include <iostream>
using namespace std;
int main()
{
//	int n_times;
//	cout << "Enter the limits: ";
//	cin >> n_times;
//	int i = 1;
//	while(i <= n_times)
//	{
//		cout << "I am a programmer"<<endl;
//		i++;
//	}
//	return 0;
		char my_char;
		cout << "Enter the character: ";
		cin >> my_char;
		
			while(my_char == 'x')
			{
				cout << "I am a programmer !"<<endl << "Enter a character again: ";
				cin >> my_char;
			}
			return 0;
}
