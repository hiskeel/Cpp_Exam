#include<iostream>
#include"WarehouseH.h"
#include"ProductH.h"

using namespace std;

void ProductSt::SetName() {
	cout << "Enter name: ";
	cin >> name;
}
string ProductSt::GetName() {
	//cout << name;
	return name;
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
void ProductSt::CreateProd() {
	cout << "Choose group, or create new(Enter 0 to create):" << endl;
	SetGroup();
	SetName();
	SetProducer();
	cout << "Enter ariving";
	cout << "Enter exp";

}