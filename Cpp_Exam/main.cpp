#include <iostream>
#include "MenuH.h"
#include "LoadH.h"
#include "WarehouseH.h"
#include <string>

using namespace std;
const int maxSize = 10;

void main() {
	int choice = 0;
	bool EXIT = false;
	bool menuBack = false;
	string any;

	Loading();
	ProductSt avatProd;
	WarehouseGoods avatWareHouse;

	avatWareHouse.CreateList();
	avatWareHouse.FormProductArray("db.txt", maxSize);
	avatWareHouse.CheckExpiring();
	cout << "\n\nEnter any key to continue..." << endl;
		cin >> any;
	system("cls");


	int size = 0;



	while (!EXIT) {
		choice = MainMenu();
		switch (choice) {
		case 1:
			menuBack = false;
			while (!menuBack) {
				choice = WarehouseMenu();
				switch (choice) {
				case 1: 

					avatWareHouse.AddProduct();
					break;
				case 2:
					
					avatWareHouse.ShowList();
					avatWareHouse.DeleteProduct();
					break;
				case 3:
					avatWareHouse.ReplaceProduct();
					break;
			
				case 9:
					menuBack = true;
					break;
				case 0:
					menuBack = true;
					EXIT = true;
					break;
			
				default:
					system("cls");
					cout << "Wrong menu point!" << endl;
					break;

				}

			}
			break;
		case 2:
			menuBack = false;
			while (!menuBack) {
				choice = SearchMenu();
				switch (choice) {
				case 1:avatWareHouse.SearchByName();
					break;
				case 2:
					avatWareHouse.SearchByProducer();
					break;
				case 3:
					avatWareHouse.SearchByPrice();
					break;
				case 4:
					avatWareHouse.SearchByGroup();
					break;
				case 5:
					avatWareHouse.SearchByAriving();
					break;
				case 6:
					avatWareHouse.SearchByExpiring();
					break;
				
				case 9:
					menuBack = true;
					break;
				case 0:
					menuBack = true;
					EXIT = true;
					break;

				default:
					system("cls");
					cout << "Wrong menu point!" << endl;
					break;

				}

			}
			break;
		case 3:
			menuBack = false;
			while (!menuBack) {
				choice = SortMenu();
				switch (choice) {
				case 1:
					avatWareHouse.SortByPriceToHigher();
					cout << "Sorted!\n\nEnter any key to continue..." << endl;
					cin >> any;
					system("cls");
					break;
				case 2:
					avatWareHouse.SortByPriceToLower();
					cout << "Sorted!\n\nEnter any key to continue..." << endl;
					cin >> any;
					system("cls");
					break;
				case 3:
					avatWareHouse.SortByGroup();
					cout << "Sorted!\n\nEnter any key to continue..." << endl;
					cin >> any;
					system("cls");
					break;
				case 9:
					menuBack = true;
					break;
				case 0:
					menuBack = true;
					EXIT = true;
					break;

				default:
					system("cls");
					cout << "Wrong menu point!" << endl;
					break;

				}

			}
			break;
		case 4:
			avatWareHouse.ShowList();
			cout << "\nEnter any symbol to continue..." << endl;
			cin >> any;
			system("cls");
			break;
		case 0:
			EXIT = true;	
			break;
		default:
			system("cls");
			cout << "Wrong menu point!" << endl;
			break;
		}
	}
	avatWareHouse.SaveListToFile("db.txt");

}