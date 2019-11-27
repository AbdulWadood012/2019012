// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	int x;
	string line;
	ofstream fout;
	fout.open("Task2.txt");
	if (fout)
	{
		cout << "Writing to the file";
		fout << "Enter your name:";
		getline(cin, line);
		cout << "Enter your name:";
		fout << line;
		fout << "Enter your age:";
		cout << "Enter your age:";
		cin >> x;
		fout << x;
	}
	else
		cout << "Error";
	fout.close();
	ifstream fin;
	fin.open("Task2.txt");
	if (fin)
	{
		cout << "Reading from the line";
		while (getline(fin, line))
		{
			cout << line << endl;
		}
	}
	else
		cout << "Error";
	fin.close();
	


	
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
