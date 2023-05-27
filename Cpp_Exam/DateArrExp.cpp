#include<iostream>
#include <string>
#include "DateArExpH.h"


string Date::SetDate() {
	cout << "Enter day(example: 01 .): "; cin >> day;
	cout << "Enter month(example: 01 .): "; cin >> month;
	cout << "Enter year: "; cin >> year;
	string date = day + "." + month + "." + year;


	return date;

	/*string date = to_string(day) + "." + to_string(month) + "." + to_string(year);


	return date;*/
}
string Date::GetDate(){
	string date = day + "." + month + "." + year;


	return date;
}