#include<iostream>
#include <string>
#include "DateArExpH.h"


string Date::SetDate() {
	/*while (!contining) {*/

		cout << "Enter day(example: 01 .): "; cin >> day;
	//	if (day.length() <= 1) {

	//	}
	//}

	cout << "Enter month(example: 01 .): "; cin >> month;
	cout << "Enter year(example: 2023 .): "; cin >> year;
	string date = day + "." + month + "." + year;


	return date;

	
}
string Date::GetDate(){
	string date = day + "." + month + "." + year;


	return date;
}