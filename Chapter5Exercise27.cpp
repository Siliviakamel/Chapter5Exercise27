#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int NUM_YEARS = 6;
	int startYear = 1910;
	int yearStep = 20;
	int population;

	ifstream inputFile("C:\\Users\\rsayo\\OneDrive\\Desktop\\People-2.txt");

	if (!inputFile)
	{
		cout << "Error: could not open the file 'People-2.txt'." << endl;
		return 1;
	}

	cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
	cout << "each * represents 1,000 people" << endl;

	for (int i = 0; i < NUM_YEARS; i++)
	{
		inputFile >> population;
		cout << startYear + (i * yearStep) << " ";
		for (int j = 0; j < population / 1000; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	inputFile.close();
	return 0;
}