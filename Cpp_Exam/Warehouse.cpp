#include<iostream>
#include"WarehouseH.h"
#include <string>

using namespace std;


void WarehouseGoods::CreateList() {
	prodBase = new  ProductSt[size];
	for (int i = 0; i < size; i++) {
		prodBase[i].CreateProd();

	}

}
void WarehouseGoods::ShowList() {
	
	for (int i = 0; i < size; i++) {
		
		cout << "* " << prodBase[i].GetGroup() << " " << prodBase[i].GetName() << " " <<  prodBase[i].GetProducer() << " " << prodBase[i].GetExpire() << " " << prodBase[i].GetArrival() << " " << endl;

	}

}