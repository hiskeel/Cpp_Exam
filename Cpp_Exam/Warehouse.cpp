#include<iostream>
#include"WarehouseH.h"
#include <string>
#include <fstream>
#include <sstream> 

using namespace std;


void WarehouseGoods::CreateList() {
	prodBase = new  ProductSt[size];
	for (int i = 0; i < size; i++) {
		prodBase[i].CreateProd();

	}
}

// Sorting
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
	ProductSt temp;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (prodBase[j].GetGroup() > prodBase[i].GetGroup()) {

				temp = prodBase[i];
				prodBase[i] = prodBase[j];
				prodBase[j] = temp;

			}
		}
	}

}
	
// List working
void WarehouseGoods::ShowList() {
	
	for (int i = 0; i < size; i++) {
		
		cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
		

	}

}

void WarehouseGoods::LoadProduct(const ProductSt& product) {
	// Increase the size of the array
	size++;

	// Create a new array with the increased size
	ProductSt* tmpArr = new ProductSt[size];

	// Copy the existing products to the new array
	for (int i = 0; i < size - 1; i++) {
		tmpArr[i] = prodBase[i];
	}

	// Add the new product to the end of the array
	tmpArr[size - 1] = product;

	// Delete the old array
	delete[] prodBase;

	// Assign the new array to prodBase
	prodBase = tmpArr;
}
void WarehouseGoods::AddProduct() {
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

// Searching
void WarehouseGoods::SearchByGroup() {
	string request;
	int count = 0;

	cout << "Enter group that you are searching: "; cin >> request;

	for (int i = 0; i < size; i++) {

		if (prodBase[i].GetGroup() == request) {
			cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			cout << endl;
			count++;
		}
		else {

		}

	}
	if (count == 0) {
		cout << "Group: " << request << " do not exist.\n" << endl;
	}

}
void WarehouseGoods::SearchByName() {
	string request;
	int count = 0;

	cout << "Enter name or product that you are searching: "; cin >> request;

	for (int i = 0; i < size; i++) {

		if (prodBase[i].GetName() == request) {
			cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			cout << endl;
			count++;
		}
		else {

		}

	}
	if (count == 0) {
		cout << "Name: " << request << " do not exist.\n" << endl;
	}

}
void WarehouseGoods::SearchByProducer() {
	string request;
	int count = 0;

	cout << "Enter producer name that you are searching: "; cin >> request;

	for (int i = 0; i < size; i++) {

		if (prodBase[i].GetProducer() == request) {
			cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			cout << endl;
			count++;
		}
		else {

		}

	}
	if (count == 0) {
		cout << "Producer: " << request << " do not exist in your list.\n" << endl;
	}

}
void WarehouseGoods::SearchByPrice() {
	int request;
	int count = 0;

	cout << "Enter price that you are searching: "; cin >> request;

	for (int i = 0; i < size; i++) {

		if (prodBase[i].GetPrice() == request) {
			cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			cout << endl;
			count++;
		}
		else {

		}

	}
	if (count == 0) {
		cout << "Price: " << request << " do not exist.\n" << endl;
	}

}
void WarehouseGoods::SearchByAriving() {
	string request;
	int count = 0;

	cout << "Enter date of ariving that you are searching (example: 10.3.2023): "; cin >> request;

	for (int i = 0; i < size; i++) {

		if (prodBase[i].GetArrival() == request) {
			cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			cout << endl;
			count++;
		}
		else {

		}

	}
	if (count == 0) {
		cout << "you have no product was arived in: " << request << ".\n" << endl;
	}

}
void WarehouseGoods::SearchByExpiring() {
	string request;
	int count = 0;

	cout << "Enter expiring date that you are searching (example: 10.3.2023): "; cin >> request;

	for (int i = 0; i < size; i++) {

		if (prodBase[i].GetExpire() == request) {
			cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << ", date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			cout << endl;
			count++;
		}
		else {

		}

	}
	if (count == 0) {
		cout << "You have no product that expiring in: " << request << ".\n" << endl;
	}

}

// fileworks
void WarehouseGoods::SaveListToFile(const string& filename) {
	ofstream file(filename);
	if (file.is_open()) {
		for (int i = 0; i < size; i++) {
			prodBase[i].SaveToFile(file);
		}
		file.close();
		cout << "Product list has been successfully saved to the file." << endl;
	}
	else {
		cout << "Unable to open the file for saving." << endl;
	}
}
void WarehouseGoods::ClearList() {
	// Delete each product object in the array


	// Delete the array
	delete[] prodBase;

	// Reset the size and prodBase
	size = 0;
	prodBase = nullptr;
}
void WarehouseGoods::LoadListFromFile(const string& filename) {
	ifstream file(filename);
	if (file.is_open()) {
		// Clear the existing product base
		ClearList();

		// Read product information from the file
		while (!file.eof()) {
			ProductSt product;
			product.LoadFromFile(file);
			LoadProduct(product);
		}

		file.close();
		cout << "Product list has been successfully loaded from the file." << endl;
	}
	else {
		cout << "Unable to open the file for loading." << endl;
	}
}