// A. Football.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	cout << "Enter The Number of Your Numbers Please = ";
	int Arr_Size;
	cin >> Arr_Size;
	cout << "\n";

	int* Player_Arr = new int[Arr_Size];

	for(int i = 0; i < Arr_Size; i++)
	{
		cout << "Enter Element Number " << i << " = ";
		cin >> Player_Arr[i];
		cout << "\n";
	}


	int Zeros_Counter = 0; //0
	int Ones_Counter = 0; //1

	for (int i = 0; i <= Arr_Size; i++)
	{

		//Zeros incrementer and Ones Emptyer
		if (Player_Arr[i] == 0)
		{
			Zeros_Counter++;
			Ones_Counter = 0;
			if (Zeros_Counter == 7)
			{
				cout << "YES \n";
				break;
			}

		}

		//Ones incrementer and Zeros Emptyer
		else if (Player_Arr[i] == 1)
		{
			Ones_Counter++;
			Zeros_Counter = 0;
			if (Ones_Counter == 7)
			{
				cout << "YES \n";
				break;
			}
		}

		else
		{
			cout << "NO \n";
		}
	}

}
