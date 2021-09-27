#include <iostream> //Header Files
#include <string.h>
using namespace std;

void validation(string name, string mail, string phone, string reg_no)
{
    bool valid = false;

    for (int k = 0; k < reg_no.length(); k++) //Validation Of Reg. No.
    {
        {
            if ((reg_no[k] > 96 && reg_no[k] < 123) || (reg_no[k] > 47 && reg_no[k] < 58) || (reg_no[k] > 64 && reg_no[k] < 91))
            {
                valid = true;
                break;
            }
            else
                valid = false;
            if (k = reg_no.length()-1)
                cout << "Invalid Reg No." << endl;
        }
                cout << "Valid Reg. No." << endl;
    }

    valid = true;
    for (int stringcount = 0; stringcount < name.length(); stringcount++) //validation of Name
    {
        if ((name[stringcount] > 64) && (name[stringcount] < 91))
            continue;
        else if ((name[stringcount] > 96) && (name[stringcount] < 123))
            continue;
        else
        {
            valid = false;
            cout << "Name should contain only Alphabetic letters" << endl;
            break;
        }
    }
    if (valid)
        cout << "Name:-\t" << name << endl;

    valid = false;
    if (phone.length() == 10)
    {
        for (int j = 0; j < phone.length(); j++) //Validation of Phone Number
        {
            if (phone.length() == 10 && phone[j] > 47 && phone[j] < 58)
            {
                valid = true;
                cout << "Valid Phone Number" << endl;
                break;
            }
            else if (j = phone.length() - 1)
            {
                cout << "Invalid Phone Number" << endl;
            }
        }
    }
    else 
        cout<<"Invalid Phone Number" << endl;
    for (int i = 0; i < mail.length(); i++) //Validation of Mail Id
    {
        if (mail[i] == '@')
        {
            valid = true;
            cout << "Valid Mail" << endl;
            break;
        }
        else
        {
            valid = false;
            if (mail[i] - 1 == mail.length())
            {
                cout << "Invalid Mail" << endl;
            }
        }
    }
}
int main()
{
    string name, mail, phone, reg_no; //declaration of variables

    cout << "Enter Name: \t";
    cin >> name; //input name

    cout << "Enter Reg_no:\t";
    cin >> reg_no; //input reg_no

    cout << "Enter phone Number: \t";
    cin >> phone; //input phone number

    cout << "Enter mail id:\t";
    cin >> mail; //input mail id

    validation(name, mail, phone, reg_no); //pass by value

    return 0;
}