#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string operation;
    double num1, num2;

    cout << "\n\t Enter operation (+ - * / )  --->: \t";
    cin >> operation;
    cout << "\nEnter first number : ";
    cin >> num1;
    cout << "Enter Second number : ";
    cin >> num2;
    cout <<"\n" << num1 << " " << operation << " " << num2 << " = " ;

    if (operation == "+") {
        cout << num1 + num2 ;
    }
    else if (operation == "-") {
        cout << num1 - num2 ;
    }
    else if (operation == "*") {
        cout << num1 * num2 ;
    }
    else if (operation == "/") {
        cout << num1 / num2 ;
    }
    else {
        cout << "\tNot a recognize operation! ";
    }

    cout << "\n-----------------------------------------\n";

    char more;
    cout << "Continue Calculation? (y/n) : ";
    cin >> more;

    if (more == 'y'){
        cout << "\n\nAgain <:>";
        main();
    }
    else if (more == 'n'){
        system("cls");
        cout << "Close the Calculator";
    }

    return 0;
}