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
void WarehouseGoods::SortByPriceToHigher() {
	ProductSt temp;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (prodBase[j].GetPrice() < prodBase[i].GetPrice()) {
				
				temp = prodBase[i];
				prodBase[i] = prodBase[j];
				prodBase[j] = temp;

			}
		}
	}
}
void WarehouseGoods::SortByPriceToLower() {
	ProductSt temp;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (prodBase[j].GetPrice() > prodBase[i].GetPrice()) {

				temp = prodBase[i];
				prodBase[i] = prodBase[j];
				prodBase[j] = temp;

			}
		}
	}
}

void WarehouseGoods::SortByGroup() {


}
	


void WarehouseGoods::ShowList() {
	
	for (int i = 0; i < size; i++) {
		
		cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
		

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
void WarehouseGoods::DeleteProduct() {
	cout << "\n\nEnter ID of product you want to delete: ";cin >> IDdelete ;

	ProductSt* tempArr = new ProductSt[size - 1];



	for (int t = 0; t < size; t++) {
		if (prodBase[t].GetID() == IDdelete) {
			for (int i = 0; i < size; i++) {
				if (t > i) {
				tempArr[i] = prodBase[i];
			}

			else if (t < i) {
				tempArr[i - 1] = prodBase[i];
			}
			
			
			}

		}
		else {

		}
	}
	delete[] prodBase;
	prodBase = tempArr;
	size--;

}

int WarehouseGoods::GetsID(int count) {
	return prodBase[count].GetID();

}
void WarehouseGoods::ReplaceProduct() {
	int choice = 0;
	ShowList();

	cout << "\n\nEnter ID of product you want to replace: "; cin >> choice;

	system("cls");

	for (int i = 0; i < size; i++) {
		if (prodBase[i].GetID() == choice) {
			
			
			apply = false;
			while (!apply) {
				system("cls");
				cout << "Are you sure that you want to replace:" << endl;
				cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
				cout << "\nIf YES => enter 1, if NO enter => 0" << endl;
				cin >> approve;
				switch (approve) {
				case 1:
					system("cls");
					prodBase[i].CreateProd();
					apply = true;
					break;
				case 0:
					apply = true;
					break;
				default:
					break;
				}
			}
		}
	}

}