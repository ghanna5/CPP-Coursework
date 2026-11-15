#include <iostream>
#include <string>

using namespace std;

int main()
{
	float cost1;
	float expenditure1;
	float mpg1;
	float maintenance1;
	float insurance1;
	float cost2;
	float expenditure2;
	float mpg2;
	float maintenance2;
	float insurance2;
	float total_car1;
	float total_car2;
	
	const float years = 10;
	const float miles_per_year = 15000;
	const float cost_per_gallon = 4;
	
	cout << "What is the cost of car 1? ";
	cin >> cost1;
	cout << "What is the miles per gallon of car 1? ";
	cin >> mpg1;
	cout << "What is the maintenance of car 1? ";
	cin >> maintenance1;
	cout << "What is the insurance of car 1? ";
	cin >> insurance1;

	cout << "\nWhat is the cost of car 2? ";
	cin >> cost2;
	cout << "What is the miles per gallon of car 2? ";
	cin >> mpg2;
	cout << "What is the maintenance of car 2? ";
	cin >> maintenance2;
	cout << "What is the insurance of car 2? ";
	cin >> insurance2;

	expenditure1 = miles_per_year / mpg1 * cost_per_gallon * years;
	expenditure2 = miles_per_year / mpg2 * cost_per_gallon *years;

	total_car1 = cost1 + maintenance1 + insurance1 + expenditure1;
	total_car2 = cost2 + maintenance2 + insurance2 + expenditure2;

	cout << "\nThe total cost of car 1 is " << total_car1 << endl;
	cout << "The total cost of car 2 is " << total_car2 << endl;
	
	if (total_car1 > total_car2)
		cout << "\nThe first car is more expensive than the second car." << endl;
	else
		cout << "\nThe first car is less expenisive than the second car." << endl;

	system("pause");
	return 0;
}