#include <iostream>
#include "MenuH.h"
#include "LoadH.h"
#include "WarehouseH.h"
#include <string>

using namespace std;

void main() {
	int choice = 0;
	bool EXIT = false;
	bool menuBack = false;

	//Loading();
	ProductSt avatProd;
	WarehouseGoods avatWareHouse;

	avatWareHouse.CreateList();
	while (!EXIT) {
		choice = MainMenu();
		switch (choice) {
		case 1:
			menuBack = false;
			while (!menuBack) {
				choice = WarehouseMenu();
				switch (choice) {
				case 1: avatWareHouse.ShowList();
					break;
				case 2:
					break;
				case 3:
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
				case 1:
					break;
				case 2:
					break;
				case 3:
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
					break;
				case 2:
					break;
				case 3:
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
		case 0:
			EXIT = true;	
			break;
		default:
			system("cls");
			cout << "Wrong menu point!" << endl;
			break;
		}
	}

}