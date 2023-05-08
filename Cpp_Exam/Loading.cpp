#include<iostream>
#include"LoadH.h"
#include <chrono>
#include <thread>

using namespace std;

void Loading() {
    string loading = "|/-\\";
    cout << "Loading  ";

    for (int i = 0; i < 50; i++) {
        cout << loading[i % 4] << flush;
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "\b";
    }

    cout << "Done!" << std::endl;
   
    this_thread::sleep_for(chrono::seconds(2));
    system("cls");

}