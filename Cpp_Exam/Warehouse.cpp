#include<iostream>
#include"WarehouseH.h"
#include <string>
#include <fstream>
#include <sstream> 



using namespace std;


void WarehouseGoods::CheckExpiring() {
	dateArray = new string[size];
	
	string dayStr;
	string monthStr;
	string yearStr;
	int day;
	int month;
	int year;
	int seconds;
	bool expire = false;
	for (int i = 0; i < size; i++) {
		dateArray[i] = prodBase[i].GetExpire();
		 dayStr = dateArray[i].substr(0, 2);
		 monthStr = dateArray[i].substr(3, 2);
		 yearStr = dateArray[i].substr(6, 4);

		

		 day = stoi(dayStr);
		 month = stoi(monthStr);
		 year = stoi(yearStr);
		 seconds = (year - 1970) * 31557600 + (month - 1) * 2629800 + 86400 * day;
		 if (seconds < time(nullptr)) {
			 cout << "You have expired product:\n* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << "grn. , date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
			 expire = true;
		 }
		 else {}


	}
	if (expire == false) {
		cout << "You have not expired products." << endl;
	}


}

void WarehouseGoods::CreateList() {
	prodBase = new  ProductSt[size];
	//for (int i = 0; i < size; i++) {
	//	/*prodBase[i].CreateProd();*/

	//}
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
			if (prodBase[j].GetGroup() < prodBase[i].GetGroup()) {

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
		
		cout << "* ID: " << prodBase[i].GetID() << " => " << prodBase[i].GetGroup() << ", " << prodBase[i].GetName() << ", producer: " << prodBase[i].GetProducer() << ", price: " << prodBase[i].GetPrice() << "grn. , date of arriving: " << prodBase[i].GetArrival() << ", date of expiring: " << prodBase[i].GetExpire() << ";" << endl;
		

	}

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
			delete[] prodBase;
			prodBase = tempArr;
			size--;
		}
		else {

		}
	}

	

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
const int MAX_PRODUCTS = 100;

void WarehouseGoods::FormProductArray(const std::string& filename, int maxSize) {
	std::ifstream file(filename);
	int count = 0;
	
	prodBase = new ProductSt[maxSize];
	if (file.is_open()) {
		while (count < maxSize && !file.eof()) {
			int id;
			std::string group;
			std::string name;
			std::string producer;
			int price;
			std::string arrival;
			std::string expire;

			if (!(file >> id)) {
				break;  
			}

			file.ignore(numeric_limits<streamsize>::max(), '\n');  

			getline(file, group);
			getline(file, name);
			getline(file, producer);
			file >> price;
			file.ignore(numeric_limits<streamsize>::max(), '\n');  
			getline(file, arrival);
			getline(file, expire);

			prodBase[count].LoadID(id);
			prodBase[count].LoadGroup(group);
			prodBase[count].LoadName(name);
			prodBase[count].LoadProducer(producer);
			prodBase[count].LoadPrice(price);
			prodBase[count].LoadArrival(arrival);
			prodBase[count].LoadExpire(expire);

			count++;
			size++;  // «б≥льшуЇмо л≥чильник size

			char delimiter;
			file >> delimiter;
			if (delimiter == '|') {
				file.ignore(numeric_limits<streamsize>::max(), '\n');  
			}
		}

		

		file.close();
		size = count;
	/*	cout << "Data has been successfully read from the file." << endl;*/
	}
	else {
		cout << "Unable to open the file for reading." << endl;
	}
}


void WarehouseGoods::SaveListToFile(const string& filename) {
	ofstream file(filename);
	if (file.is_open()) {
		for (int i = 0; i < size; i++) {
			prodBase[i].SaveToFile(file);
			if (i < size - 1) {
				file << "|" << endl;  
			}
		}
		file.close();
		cout << "Product list has been successfully saved to the file." << endl;
	}
	else {
		cout << "Unable to open the file for saving." << endl;
	}
}	