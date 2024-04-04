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
	}


}
