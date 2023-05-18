#pragma once
#include<iostream>
#include"DateArExpH.h"
#include <string>
#include"WarehouseH.h"

using namespace std;

struct ProductSt 
{
private:
	string any;
	string name;
	string group;
	Date arrival;
	Date expiring;
	string producer;
	int price;
	int ID;
	
	/*WarehouseGoods WareAgent;*/
	
	

public:
	void SetID();
	int GetID();

	void SetPrice();
	int GetPrice();

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


	void CreateProd();


};