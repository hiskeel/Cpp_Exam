#include<iostream>
#include <string>
#include "DateArExpH.h"


string Date::SetDate() {
	cout << "Enter day: "; cin >> day;
	cout << "Enter month: "; cin >> month;
	cout << "Enter year: "; cin >> year;
	string date = to_string(day) + "." + to_string(month) + "." + to_string(year);


	return date;

	/*string date = to_string(day) + "." + to_string(month) + "." + to_string(year);


	return date;*/
}
string Date::GetDate(){
	string date = to_string(day) + "." + to_string(month) + "." + to_string(year);


	return date;
}