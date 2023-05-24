#include<iostream>
#include"MenuH.h"

using namespace std;

int MainMenu() {

	int choice = 0;

	cout << "Choose what you want to work with:\n1. Warehouse changes;\n2. Search for product;\n3. Sort product;\n4. Show product list;\n0. Exit! " << endl;
	cin >> choice;
	system("cls");
	return choice;
	
}

int WarehouseMenu() {
	int choice = 0;

	cout << "Warehouse:\n1. Add new product\n2. Delete product;\n3. Change product;\n9. Back to main menu;\n0. Exit! " << endl;
	cin >> choice;
	system("cls");
	return choice;
}

int SearchMenu() {

	int choice = 0;

	cout << "Search by:\n1. Name;\n2. Producer;\n3. Price;\n4. Product Group;\n5. Arrival\n6. Expiring time\n9. Back to main menu;\n0. Exit!" << endl;
	cin >> choice;
	system("cls");
	return choice;
}
int SortMenu() {

	int choice = 0;

	cout << "Sort by:\n1. Price from lower;\n2. Price from higher\n3. Product Group;\n9. Back to main menu;\n0. Exit!" << endl;
	cin >> choice;
	system("cls");
	return choice;

}
//int EditMenu() {
//	cout << "Choose what you want to change:\n1. ID;\n2. Group name;\n3. Name of product;\n4. "
//}


