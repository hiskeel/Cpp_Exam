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
		
		cout << "* " << prodBase[i].GetID() << " " << prodBase[i].GetGroup() << " " << prodBase[i].GetName() << " " << prodBase[i].GetProducer() << " " << prodBase[i].GetPrice() << " " << prodBase[i].GetExpire() << " " << prodBase[i].GetArrival() << " " << endl;

	}

}void WarehouseGoods::AddProduct() {
	ProductSt* tmpArr = new ProductSt[size + 1];
	for (int i = 0; i < size; i++) {
		tmpArr[i] = prodBase[i];
	}
	tmpArr[size].CreateProd();


	delete[] prodBase;
	prodBase = tmpArr;
	size++;
}