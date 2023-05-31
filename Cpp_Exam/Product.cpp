#include<iostream>
#include"WarehouseH.h"
#include"ProductH.h"
#include <string>
#include <fstream>


using namespace std;

// seters geters
void ProductSt::LoadName(string& value) {
	name = value;
}
void ProductSt::SetName() {
	
	
	cout << "Enter name, if you have to write 2 words, use cammel case( mineralWater ): ";
	cin >> name;
	/*cin >> name;*/
	
	/*cout << name;*/
}
string ProductSt::GetName() {
	//cout << name;
	return name;
}

void ProductSt::LoadID(int& value) {
	ID = value;
}
void ProductSt::SetID() {
	//int apply;
	//apply = false;
	//while (!apply) {
	srand(time(NULL));
	ID = rand() % 10000;
/*		for (int i = 0; i < WareAgent.GetSize(); i++) {
			if (prodBase[i].GetID() == ID) {
				system("cls");
				cout << "This ID is already busy!\n" << endl;
				break;
			}
			else {
				apply = true;
			}
		}
		*/	
	/*}*/
		
		

}
int ProductSt::GetID() {
	return ID;

}

void ProductSt::LoadPrice(int& value) {
	price = value;
}
void ProductSt::SetPrice() {
	cout << "Enter price: ";
	cin >> price;

}
int ProductSt::GetPrice() {
	return price;

}

void ProductSt::LoadProducer(string& value) {
	producer = value;
}
void ProductSt::SetProducer() {

	
	cout << "Enter Producer, if you have to write 2 words, use cammel case( mineralWater ): ";
	cin >> producer;
	
	//cout << producer;
}
string ProductSt::GetProducer() {
	/*cout << producer;*/
	return producer;
}

void ProductSt::LoadGroup(string& value) {
	group = value;
}
void ProductSt::SetGroup() {
	
	cout << "Enter group name, if you have to write 2 words, use cammel case( mineralWater ): ";
	cin >> group;
	
	/*cout << group;*/
}
string ProductSt::GetGroup() {
	//cout << group;
	return group;
}

void ProductSt::LoadArrival(string& value) {
	arrival = value;
}
void ProductSt::SetArrival() {
	
	arrival = arrivalGet.SetDate();
}
string ProductSt::GetArrival() {

	return arrival;
}

void ProductSt::LoadExpire(string& value) {
	expiring = value;
}
void ProductSt::SetExpire() {
	expiring = expiringGet.SetDate();
}
string ProductSt::GetExpire() {
	
	return expiring;
}

// fileworks creating
void ProductSt::CreateProd() {
	cout << "Choose group, or create new(Enter 0 to create):" << endl;
	SetGroup();
	/*cout << "Group :" << GetGroup() << endl*/;
	SetName();
	/*cout << "Name: " << GetName() << endl;*/
	SetProducer();
	/*cout << "Producer: " << GetProducer() << endl;*/
	SetID();
	SetPrice();
	cout << "Enter coming date: " << endl;
	SetArrival();
	cout << endl;
	cout << "Enter expiring date:" << endl;
	SetExpire();

	cout << "Enter any symbol to continue..." << endl;
	cin >> any;

	system("cls");
}
void ProductSt::SaveToFile(ofstream& file) {
	file << GetID() << endl;
	file << GetGroup() << endl;
	file << GetName() << endl;
	file << GetProducer() << endl;
	file << GetPrice() << endl;
	file << GetArrival() << endl;
	file << GetExpire() << endl;
}
