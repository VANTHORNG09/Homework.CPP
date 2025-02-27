#include <iostream>
using namespace std;
void printerLogo()
{
    cout << " ____        ___  _                             _      " << endl;
    cout << " |  _ \\      / _ \\/ |   ___ ___  _ __  ___  ___ | | ___" << endl;
    cout << " | |_) |____| | | | |  / __/ _ \\| '_ \\/ __|/ _ \\| |/ _ \\" << endl;
    cout << " |  __/_____| |_| | | | (_| (_) | | | \\__ \\ (_) | |  __/" << endl;
    cout << " |_|         \\___/|_|  \\___\\___/|_| |_|___/\\___/|_|\\___|" << endl;
}

void printerMenu()
{
    cout << "1. money exchange program" << endl;
    cout << "2.worker salary  " << endl;
    cout << "3. sum/mul of 1...n" << endl;
}

int main()
{
    int option;
    do
    {
        system("cls");
        printerLogo();
        printerMenu();
        cout << "choose your option : ";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            system("cls");
            int op;
            cout << "Exchange form usd ->KHR " << endl;
            cout << "Exchange form KHR -> USd " << endl;
            cout << "Exit" << endl;
            cout << "Choose exchange option (1-3)";
            cin >> op;
            if (op == 1)
            {
                cout << "USD -> KHR " << endl;
            }
            else if (op == 2)
            {
                cout << "KHR -> " << endl;
            }
            else if (op == 3)
            {
                cout << "Exit form o exchange porgram " << endl;
            }
            else if (op == 4)
            {
                cout << "invalue option " << endl;
            }
        }
        break;
        case 2:
        {
        }
        break;
        case 3:
        {
        }
        break;
        case 4:
        {
        }
        break;
        default:
            cout << "invalue option choose again " << endl;
            break;
              }
        break;

    } while (option != 4);

    return 0;
}