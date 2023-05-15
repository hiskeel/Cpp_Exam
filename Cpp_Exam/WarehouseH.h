#pragma once
#include<iostream>
#include"ProductH.h"
#include <string>

using namespace std;

struct WarehouseGoods
{
private:
	ProductSt* prodBase;
	int size = 1;
public:
	

	void CreateList();
	void AddProduct();
	void ShowList();
	void DeleteProduct();

};