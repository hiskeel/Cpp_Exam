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
	int size = 1;
	bool apply = false;
public:
	

	void CreateList();
	void AddProduct();
	void ShowList();
	void DeleteProduct();
	void ReplaceProduct();

	int GetsID(int count);
	void SortByPriceToHigher();
	void SortByPriceToLower();
	void SortByGroup();

	void SearchByName();
	void SearchByProducer();
	void SearchByGroup();
	void SearchByPrice();
	void SearchByAriving();
	void SearchByExpiring();

	void LoadProduct(const ProductSt& product);
	void SaveListToFile(const string& filename);
	void LoadListFromFile(const std::string& filename);
	void ClearList();


};