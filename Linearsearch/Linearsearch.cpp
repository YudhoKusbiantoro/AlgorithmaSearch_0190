// Linearsearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n;       // number of element in the array
int i;       // index of arrayy element

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray shoudl have minimum 1 and maximum 20 element.\n\n";
	}

	//Accepy array element 
	cout << "\n-------------------\n";
	cout << "Enter array element \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}

}

void LinearSearch()
{
	char ch;
	int ctr; // Number of comparisons
	int item;

	do
	{
		//Accaept the number to be searched
		cout << "\nEnter the elment you want to search : "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; //step 2 
		while (i < n) //step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "Found at position" << (i + 1) << endl; //step 6
				break;
			}
			i++; //step 4
		}
		if (i == n) //step 5
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons : " << ctr << endl;

		cout << "\nContinue search (y/n) : ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}
void display()
{
	cout << "Array element are : ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	input();
	LinearSearch();
	display();

}
