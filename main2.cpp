#include "KomplexND.h"
#include "Komplexzahlen.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int choice;
    cout << "Enter 1 for complex number operations or 2 for complex ND operations: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            Komplexzahlen c1, c2, c3, c4, c5;
            cin >>c1>>c2;
            

            c3 = c1 + c2;
            c4 = c1 * c2;
            c5 = c1 * 5;
            c1.setPolar();

            
            

            cout <<"Addition: "<<c3 << " " <<"Multipliktion: "<< c4 << " " <<"Multiplikation skalar:"<< c5 << " " << endl;
            break;
        }
        case 2:
        {
            KomplexND v(2);
            KomplexND v2(2);

            v.insert();
            v2.insert();

            KomplexND result = v + v2;

            result.display();
            break;
        }
        default:
            cout << "Invalid choice. Please enter 1 or 2." << endl;
            break;
    }

    return 0;
}