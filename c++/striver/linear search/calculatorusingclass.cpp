#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class input
{
protected:
    float a, b, result;
    char operation;

public:
    void Set_Data();
    void simplecalculation();
    void Get_Data();
    // void Get_char(char);
};
void input ::Set_Data()
{
    cin >> a >> b;
    // a = st;
    // b = nd;
}
// void input ::Get_char(char operat)
// {
//     operation = operat;
// }
// class simplecalculator : public input
// {
// protected:
//     float result;

// public:
void input::simplecalculation()
{
    cin >> operation;
    switch (operation)
    {

    case '+':
        result = a + b;
        break;
    case '*':
        result = a * b;
        break;
    case '-':
        result = a - b;
        break;
    case '/':
        result = a / b;
        break;
    }
}
// // };
// // class res : public simplecalculator, public input
// // {
// // public:
//     void Get_Data();
// };
void input ::Get_Data()
{
    // cout << "The " << operation << " of " << a << " and " << b << " is " << result << endl;
    cout << " Result  is  :- " << result << endl;
}
int main()
{
    input test1;
    test1.Set_Data();
    // test1.Get_char('+');
    test1.simplecalculation();
    // TEST1.result;
    test1.Get_Data();
    return 0;
}