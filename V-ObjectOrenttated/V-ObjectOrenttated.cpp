// V-ObjectOrenttated.cpp
#include <iostream>
#include <string>
#include <limits>
#include "Book.h"

using namespace std;

 

string Response;
string UserSearch;
string USERNAME;
int DOB;
string PASSWORD;

//bool isAvalible = true;
//bool isUnAvalible = false;




int main() 
{
    cout << " log in using your USERNAME and DOB\n";

    cout << "USERNAME: "; cin >> USERNAME;

    cout << "DOB (DDMMYYYY): "; cin >> DOB;

    //while (!(cin >> DOB)) {
      //  cout << "invalid input. input numbers for DOB ";
        //cin.clear();

        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //}
        cout << "PASSWORD: ";  cin >> PASSWORD;

        cout << "USERNAME:" << USERNAME << "\n";


        cout << "D0B:"; cin >> DOB; cout << DOB << "\n";

        cout << "PASSWORD: " << "********* \n";



        cout << "Thank you "; cout << USERNAME;  cout << "for logging in\nWould you like to rent a book ? (YES or NO) \n ";
        cin >> Response;

        if (Response == "yes" || Response == "YES")
        {
            cout << "What book would you like to rent? \n";
            cin >> UserSearch;

            // cin >> UserBookSearch;

            bool found = false;
            for (int i = 0; i < 3; i++) {
                if (library[i].Title == UserSearch) {
                    cout << "foundand sent" << endl;
                    found = true;
                }

                //cin >> Book;

                //cout << "searching if "; cout << Book << " is avalible\n";
            }
            if (!found) {
                cout << "sorry book not found" << endl;
            }

            //else {
              //  cout << "try again" << endl;
            //}
        }


    }
