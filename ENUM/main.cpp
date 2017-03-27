//ENUM.CPP
#include <iostream>
using namespace std;

enum etype {labrorer, secretary, manager, accountant, executive, researcher};

int main()
{
    etype types;
    char type;
    cout << "Enter employee type (first letter only)\n"
            "labrorer, secretary, manager, "
            "accountant, executive, researcher : ";
    cin >> type;

    switch(type)
    {
        case 'l': types = labrorer;break;
        case 's': types = secretary;break;
        case 'm': types = manager;break;
        case 'a': types = accountant;break;
        case 'e': types = executive;break;
        case 'r': types = researcher;break;
    }

    switch(types)
    {
        case 0: cout << "Employee type is labrorer" << endl;break;
        case 1: cout << "Employee type is secretary" << endl;break;
        case 2: cout << "Employee type is manager" << endl;break;
        case 3: cout << "Employee type is accountant" << endl;break;
        case 4: cout << "Employee type is executive" << endl;break;
        case 5: cout << "Employee type is researcher" << endl;break;
    }

    return 0;
}

