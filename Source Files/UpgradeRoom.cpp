#include "../Header Files/UpgradeRoom.h"
#include "../Header Files/Mediator.h"
#include <fstream>
#include <iostream>

using namespace std;

void UpgradeRoom::roomOperation(){
    system("clear");
    Display();

    Mediator m;
    string nextstep;

    cout << "\n You have the option to upgrade here, which Attribute would you like to upgrade?\n";
    cout << "\n     [1] Maximum Health Points & Regular Health Points + 5 \n";
    cout << "\n     [2] Attack Points + 2\n";

    cin >> nextstep;

    if(nextstep == "1"){
        m.UpgradeHealthPoints(); //Calls upon mediator to upgrade the health points of the player
        cout << "\nYou have upgraded your maximum health capacity + 5";
    }

    else if (nextstep == "2"){
        m.UpgradeAttackPoints(); //Calls upon mediator to upgrade the attack points of the player
        cout << "\n You have upgraded your Attack Points + 2";
    }
    cin.get();
}

void UpgradeRoom::Display(){
    fstream upgradeFile;
    upgradeFile.open("UpgradeDisplay.txt", ios::in);
    if (upgradeFile.is_open()) {
     string line;
     while (getline(upgradeFile, line)){
         cout << line << endl;
     }
     upgradeFile.close();
    }
}
