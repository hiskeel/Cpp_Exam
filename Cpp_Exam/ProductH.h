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
	string arrival;
	string expiring;
	string producer;
	int price;
	int ID;
	
	/*WarehouseGoods WareAgent;*/
	
	

public:
	Date arrivalGet;
	Date expiringGet;
	
	void LoadID(int& value);
	void SetID();
	int GetID();

	void LoadPrice(int& value);
	void SetPrice();
	int GetPrice();

	void LoadName(string& value);
	void SetName();
	string GetName();

	void LoadProducer(string& value);
	void SetProducer();
	string GetProducer();

	void LoadGroup(string& value);
	void SetGroup();
	string GetGroup();

	void LoadArrival(string& value);
	void SetArrival();
	string GetArrival();

	void LoadExpire(string& value);
	void SetExpire();
	string GetExpire();


	void CreateProd();
	void SaveToFile(std::ofstream& file);



};