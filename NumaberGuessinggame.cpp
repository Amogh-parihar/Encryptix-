#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "\n\t---------------------Welcome to Number Guessing Game---------------------"<<endl;
    string name;
    char input;
    int inputuser;
    cout << "\n\t  Enter your name  -->\t" ;
    getline (cin,name);
    cout << "\nLets start Playing , All the best. \n";
    cout << endl;
    do 
    {
        srand(time(0));
        int variable = ( rand()%5 )+1;
        cout << "Enter any number in between range 1 to 5 :> ";
        cin >> inputuser;
        cout << endl;
        if (inputuser == variable){
            cout << "\nCongratulations!!! YOU GUESSED THE CORRECT NUMBER \n" << endl;
    
        
        }
        else if (inputuser > variable){
            cout << "You guess wrong no. \n--- Guess lower! --- \n" << endl;
        }
        else {
            cout << "You guess wrong no. \n--- Guess higher! --- \n" << endl;
        }
        cout << "Would you like to try again? (y/n) : ";
        cin >> input;
        cout << endl;
        
    } while(input !='n');
        
    cout << "\n-------------------Game end-------------------\n" << endl;

}