#include<iostream>
#include"WarehouseH.h"

using namespace std;


void WarehouseGoods::CreateList() {
	prodBase = new  ProductSt[size];
	for (int i = 0; i < size; i++) {
		prodBase[i].CreateProd();

	}

}
void WarehouseGoods::ShowList() {
	
	for (int i = 0; i < size; i++) {
		
		cout << prodBase[i].GetName() << " " << prodBase[i].GetGroup() << " " << prodBase[i].GetProducer() << endl;;

	}

}