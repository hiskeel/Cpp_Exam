#include<iostream>
#include"WarehouseH.h"
#include"ProductH.h"
#include <string>


using namespace std;


void ProductSt::SetName() {
	cout << "Enter name: ";

	/*cin.ignore(std::numeric_limits<std::streamsize>::max());*/
	getline(cin, name);
	
	/*cout << name;*/
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
	/*cin.ignore(std::numeric_limits<std::streamsize>::max());*/
	getline(cin, producer);
	
	//cout << producer;
}
string ProductSt::GetProducer() {
	/*cout << producer;*/
	return producer;
}
void ProductSt::SetGroup() {
	cout << "Enter group name: ";
	/*cin.ignore(std::numeric_limits<std::streamsize>::max());*/
	getline(cin, group);
	
	/*cout << group;*/
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