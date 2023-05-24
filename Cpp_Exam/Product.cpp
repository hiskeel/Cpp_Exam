#include<iostream>
#include"WarehouseH.h"
#include"ProductH.h"
#include <string>
#include <fstream>


using namespace std;

// seters geters
void ProductSt::LoadName(string value) {
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

void ProductSt::LoadID(int value) {

}
void ProductSt::SetID() {
	/*apply = false;*/
	/*while (!apply) {*/
		cout << "Enter ID: ";
		cin >> ID;
	/*	for(int i = 0; i < WareAgent.GetSize(); i++)
			if (WareAgent.GetsID() == ID) {

		}
	}*/
		
		

}
int ProductSt::GetID() {
	return ID;

}

void ProductSt::LoadPrice(int value) {

}
void ProductSt::SetPrice() {
	cout << "Enter price: ";
	cin >> price;

}
int ProductSt::GetPrice() {
	return price;

}

void ProductSt::LoadProducer(string value) {
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

void ProductSt::LoadGroup(string value) {
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

void ProductSt::LoadArrival(Date value) {
	arrival = value;
}
void ProductSt::SetArrival() {
	arrival.SetDate();
}
string ProductSt::GetArrival() {
	return arrival.GetDate();;
}

void ProductSt::LoadExpire(Date value) {
	expiring = value;
}
void ProductSt::SetExpire() {
	expiring.SetDate();
}
string ProductSt::GetExpire() {
	return expiring.GetDate();
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
void ProductSt::LoadFromFile(ifstream& file) {
	int id;
	file >> id;
	LoadID(id);

	string group;
	file.ignore();
	getline(file, group);
	LoadGroup(group);

	string name;
	getline(file, name);
	LoadName(name);

	string producer;
	getline(file, producer);
	LoadProducer(producer);

	int price;
	file >> price;
	LoadPrice(price);

	//string arrival;
	//file.ignore();
	//getline(file, arrival);
	//Date arrivalDate(arrival);
	//LoadArrival(arrivalDate);

	//string expire;
	//getline(file, expire);
	//Date expireDate(expire);
	//LoadExpire(expireDate);
}