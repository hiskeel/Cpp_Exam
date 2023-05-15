#include<iostream>
#include"WarehouseH.h"
#include"ProductH.h"
#include <string>


using namespace std;

void ProductSt::SetName() {
	cout << "Enter name: ";
	cin >> name;
}
string ProductSt::GetName() {
	//cout << name;
	return name;
}
void ProductSt::SetID() {
	ID++;

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
	cin >> producer;
}
string ProductSt::GetProducer() {
	/*cout << producer;*/
	return producer;
}
void ProductSt::SetGroup() {
	cout << "Enter group name: ";
	cin >> group;
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
	SetPrice();
	SetProducer();
	SetID();
	cout << "Enter coming date: " << endl;
	SetArrival();
	cout << endl;
	cout << "Enter expiring date:" << endl;
	SetExpire();
	cout << endl;

}