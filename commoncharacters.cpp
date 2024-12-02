#include <iostream>
using namespace std;
int main()
{
	system("cls");
	string s1 = " ";
	string s2 = " ";
	cout << "Enter S1: ";
	cin >> s1;

	cout << "Enter S2: ";
	cin >> s2;

	int sum2 = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		for (int j = 0; j < s2.length(); j++)
		{
			if (s1[i] == s2[j])
			{
				sum2 = sum2 + 1;
				s2[j] = ' ';
				break;
			}
		}
	}
	cout<<sum2;
	
}