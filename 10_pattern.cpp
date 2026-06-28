//     *
//    * *
//   *   *
//  *     *
// *********

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i == n || j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}