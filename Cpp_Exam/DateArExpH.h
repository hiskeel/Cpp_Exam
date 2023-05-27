#pragma once
#include <iostream>
#include<string>

using namespace std;

struct Date {
private:

	string day;
	string month;
	string year;

public:
	string SetDate();
	string GetDate();
};