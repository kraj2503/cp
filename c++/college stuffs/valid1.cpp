#include <iostream> //Header Files
#include <ctype.h>
#include <string.h>
using namespace std;

void validate(string name, string mail, string phone, string regno)
{
    bool valid = false;

    for (int k = 0; k < regno.length(); k++) //Validation Of Reg. No.
    {
        if (regno.length() == 15)
        {
            if ((regno[k] > 64 && regno[k] < 91) || (regno[k] > 96 && regno[k] < 123) || (regno[k] > 47 && regno[k] < 58))
            {
                valid = true;
                break;
            }
            else
                valid = false;
        }
    }
    if (valid)
        cout << "valid regno" << endl;
    else
        cout << "invalid regno" << endl;

    valid = true;
    for (int nameCount = 0; nameCount < name.length(); nameCount++) //validation of Name
    {
        if ((name[nameCount] > 64) && (name[nameCount] < 91))
            continue;
        else if ((name[nameCount] > 96) && (name[nameCount] < 123))
            continue;
        else
        {
            valid = false;
            cout << "Invalid Name" << endl;
            break;
        }
    }
    if (valid)
        cout << "Valid Name" << endl;

    valid = false;
    for (int i = 0; i < mail.length(); i++) //Validation of Mail Id
    {
        if (mail[i] == '@')
        {
            valid = true;
            break;
        }
        else
        {
            valid = false;
        }
    }
    if (valid)
        cout << "Valid Mail" << endl;
    else
        cout << "Invalid Mail" << endl;

    valid = false;
    for (int j = 0; j < phone.length(); j++) //Validation of Phone Number
    {
        if (phone.length() == 10 && phone[j] > 47 && phone[j] < 58)
        {
            valid = true;
            break;
        }
    }
    if (valid)
        cout << "Valid Phone number" << endl;
    else
        cout << "Invalid Phone number" << endl;
}

int main()
{
    string name, mail, phone, regno; //declaration
    cout << "Enter Name:\t";
    cin >> name; //input name
    cout << "Enter Regno:\t";
    cin >> regno; //input regno
    cout << "Enter phone Number:\t";
    cin >> phone; //input phone number
    cout << "Enter mail id:\t";
    cin >> mail;                        //input mail id
    validate(name, mail, phone, regno); //pass by value

    return 0;
}