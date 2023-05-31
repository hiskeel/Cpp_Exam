#pragma once
#include <iostream>
#include<string>

using namespace std;

struct Date {
private:

	string day;
	string month;
	string year;
	bool contining = false;

public:
	string SetDate();
	string GetDate();
};