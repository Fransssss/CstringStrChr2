// Title: CString - using strchar
// Purpose: locate address of a char amd locate position of a char
// Author : Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

int main()
{
    char userIn[20];     // user input
    char choice;         // user choice

    cout << endl << "Cstring - StrChar -" << endl;
    cout << "Input a string: " << endl;
    cin >> userIn;
    cout << "The string is [" << userIn << "]" << endl << endl;
    cout << "Would you like to locate a character Y/N ?";
    cin >> choice;
    cout << endl;
    while(choice != 'N')
    {
        if(choice == 'Y')
        {
            char Chr;              // char to find
            size_t indChr;         // index of char
            char* addChr;          // address of char
            cout << "Input a character:";
            cin >> Chr;
            addChr = strchr(userIn, Chr);
            if(addChr != nullptr)
            {
                for(size_t i = 0; userIn[i] != '\0'; ++i)
                {
                    if(userIn[i] == Chr)
                    {
                        indChr = i+1 ;  // plus one assuming user only know index start at 1
                    }
                }
                cout << "[" << Chr << "] is found at address [ " << &addChr << " ] at position [" << indChr << "]" << endl << endl;
            } else
            {
                cout << "["<< Chr << "] is not found " << endl << endl;
            }
        } else
        {
            cerr << "Invalid input";
        }

        cout << endl << "Would you like to locate a character Y/N ?";
        cin >> choice;
        cout << endl;
    }

    if(choice == 'N')
    {
        cout << endl << "Exit Program";
    }
    return 0;
}
