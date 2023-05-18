#include<iostream>
#include"WarehouseH.h"
#include"ProductH.h"
#include <string>


using namespace std;


void ProductSt::SetName() {
	cout << "Enter name: ";
	/*cin.ignore(numeric_limits<streamsize>::max(), '\n');*/
	getline(cin, name);
}
string ProductSt::GetName() {
	//cout << name;
	return name;
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
void ProductSt::SetPrice() {
	cout << "Enter price: ";
	cin >> price;

}
int ProductSt::GetPrice() {
	return price;

}
void ProductSt::SetProducer() {
	cout << "Enter Producer: ";
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, producer);
}
string ProductSt::GetProducer() {
	/*cout << producer;*/
	return producer;
}
void ProductSt::SetGroup() {
	cout << "Enter group name: ";
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, group);
}
string ProductSt::GetGroup() {
	//cout << group;
	return group;
}
void ProductSt::SetArrival() {
	arrival.SetDate();
}
string ProductSt::GetArrival() {
	return arrival.GetDate();;
}
void ProductSt::SetExpire() {
	expiring.SetDate();
}
string ProductSt::GetExpire() {
	return expiring.GetDate();
}
void ProductSt::CreateProd() {
	cout << "Choose group, or create new(Enter 0 to create):" << endl;
	SetGroup();
	SetName();
	SetProducer();
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