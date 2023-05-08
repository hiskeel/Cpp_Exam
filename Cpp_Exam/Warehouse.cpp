#include<iostream>
#include"WarehouseH.h"

using namespace std;

void WarehouseGoods::SetName() {
	cout << "Enter name: ";
	cin >> name;
}
string WarehouseGoods::GetName() {
	return name;
}
void WarehouseGoods::SetProducer() {
	cout << "Enter name: ";
	cin >> producer;
}
string WarehouseGoods::GetProducer() {
	return producer;
}
void WarehouseGoods::SetGroup() {
	cout << "Enter name: ";
	cin >> group;
}
string WarehouseGoods::GetGroup() {
	return group;
}