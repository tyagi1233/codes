#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows you want" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (n - j + 1);
            // cout << j;
            // 1234
            // 1234
            // 1234
            // ..
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}