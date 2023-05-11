#pragma once
#include<iostream>
#include"ProductH.h"

using namespace std;

struct WarehouseGoods
{
private:
	ProductSt* prodBase;
	int size = 1;
public:
	

	void CreateList();
	void ShowGroups();
	void ShowList();


};