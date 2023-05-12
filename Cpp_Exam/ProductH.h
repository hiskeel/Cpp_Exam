#pragma once
#include<iostream>
#include"DateArExpH.h"
#include <string>

using namespace std;

struct ProductSt 
{
private:
	string name;
	string group;
	Date arrival;
	Date expiring;
	string producer;
	int size = 0;

public:
	void SetName();
	string GetName();
	void SetProducer();
	string GetProducer();
	void SetGroup();
	string GetGroup();
	void SetArrival();
	string GetArrival();
	void SetExpire();
	string GetExpire();

	void CreateList();
	void CreateProd();


};