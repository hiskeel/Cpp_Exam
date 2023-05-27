#pragma once
#include<iostream>
#include"ProductH.h"
#include <string>

using namespace std;

struct WarehouseGoods
{
private:
	int IDdelete;
	int approve;
	ProductSt* prodBase;
	string* dateArray;
	int ID;
	int size = 1;
	bool apply = false;
public:
	

	void CreateList();
	void AddProduct();
	void ShowList();
	void DeleteProduct();
	void ReplaceProduct();

	void CheckExpiring();
	void SortByPriceToHigher();
	void SortByPriceToLower();
	void SortByGroup();

	void SearchByName();
	void SearchByProducer();
	void SearchByGroup();
	void SearchByPrice();
	void SearchByAriving();
	void SearchByExpiring();


	void SaveListToFile(const string& filename);
	void FormProductArray(const std::string& filename, int maxSize);

	


};