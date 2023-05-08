#pragma once

struct WarehouseGoods
{
private:
	string name;
	string group;
	string arrival;
	string expiring;
	string producer;
	int size = 0;

public:
	void SetName();
	string GetName();
	void SetProducer();
	string GetProducer();
	void SetGroup();
	string GetGroup();

	void CreateList();
	void CreateProd();

};