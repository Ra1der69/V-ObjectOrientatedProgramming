// V-ObjectOrenttated.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

string Response;
string Book;
string USERNAME;
float DOB;
string PASSWORD;

bool isAvalible = true;
bool isUnAvalible = false;




int main()
{
    cout << " log in using your USERNAME and DOB\n";
    

    cout << "USERNAME: "; cin >> USERNAME; 
    cout << "DOB: ";  cin >> DOB; 
    cout << "PASSWORD: ";  cin >> PASSWORD;
    cout << endl;
    cout << "USERNAME:" << USERNAME << "\n"; 
    cout << "D0B:" << DOB << "\n"; 
    cout << "PASSWORD: " << "********* \n";
    
    cout << "thank you for logging in\n would you like to rent a book? (YES or NO) \n " ;
    cin >> Response;

    if (Response == "yes")
    {
        cout << "what book would you like to rent? \n";

        cin >> Book ;

        cout << "searching if "; cout << Book << " is avalible\n";
    }

    else {
        cout << "try again" << endl;
    }



}