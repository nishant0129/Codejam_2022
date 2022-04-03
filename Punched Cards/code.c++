#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int j = 1;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        char arr[2 * r + 1][2 * c + 1];
        cout << "Case #" << j << ":" << endl;
        for (int i = 0; i < r * 2 + 1; i++)
        {
            for (int k = 0; k < 2 * c + 1; k++)
            {
                if (k % 2 == 0 && i % 2 == 0)
                    arr[i][k] = '+';
                else if (i % 2 == 1 && k % 2 == 0)
                {
                    arr[i][k] = '|';
                }
                else if (i % 2 == 1 && k % 2 == 1)
                    arr[i][k] = '.';
                else
                    arr[i][k] = '-';
            }
        }
        arr[0][0] = '.';
        arr[0][1] = '.';
        arr[1][0] = '.';
        arr[1][1] = '.';
        // j++;

        for (int i = 0; i < r * 2 + 1; i++)
        {
            for (int k = 0; k < 2 * c + 1; k++)
            {
                cout << arr[i][k];
            }
            cout << endl;
        }
        j++;
    }
}