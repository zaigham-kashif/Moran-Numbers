#include<iostream>

using namespace std;

int CheckMoran(int No_toBeTested);

int main()
{
	int no_toBeTested = 0;
	cout << "	Enetr a number : ";
	cin >> no_toBeTested;

	if (CheckMoran(no_toBeTested) == 2)
	{
		cout << "	Number is Moran" << endl;
	}
	else if (CheckMoran(no_toBeTested) == 1)
	{
		cout << "	Number is Harshad" << endl;
	}
	else if (CheckMoran(no_toBeTested) == 0)
	{
		cout << "	Number is not Harshad" << endl;
	}

	system("pause");
}

int CheckMoran(int No_toBeTested)
{
	int Sum_ofDigits = 0;
	int Copy_no = No_toBeTested;
	int prime = 0, counter = 0;

	while (Copy_no != 0)
	{
		Sum_ofDigits = Sum_ofDigits + (Copy_no % 10);
		Copy_no = Copy_no / 10;
	}

	if (No_toBeTested % Sum_ofDigits == 0)
	{
		prime = No_toBeTested / Sum_ofDigits;
		for (int i = 1; i <= prime; i++)
		{
			if (prime % i == 0)
			{
				counter++;
			}
		}
		if (counter == 2)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}