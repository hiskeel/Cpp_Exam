#pragma once
#include <iostream>
#include<string>

using namespace std;

struct Date {
private:

	int day;
	int month;
	int year;

public:
	void SetDate();
	string GetDate();
};