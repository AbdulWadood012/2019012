// Task1_2019012.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,50 };
	int sum = 0;
	ofstream fout;
	fout.open("task1.txt")
	if (fout)
	{
		for (intx = 0; x < 5; x++)
		{
			fout << arr[x] << " ";
		}
		for (int x = 0; x < 5; x++)
		{
			sum=sum+arr[x]
		}
		fout << "sum is:" << sum
			fout.close();
		cout << "Writing to the file" << endl;
		cout << "The retrieved array is:";
		fout<<arr[5]
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
