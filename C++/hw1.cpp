#include <iostream>
using namespace std;
int main()
{
    cout << "enter the character" << endl;
    char ch;
    cin >> ch;
    int c = ch;
    if (c >= 65 && c <= 90)
    {
        cout << "upper case" << endl;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << "lower case" << endl;
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "numerical" << endl;
    }
    else
    {
        cout << " Dhng se input se bsdk" << endl;
    }
}