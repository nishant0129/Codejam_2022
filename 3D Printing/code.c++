#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int j = 1;
    while (t--)
    {
        int c, m, y, k;
        cin >> c >> m >> y >> k;
        int c1, m1, y1, k1;
        cin >> c1 >> m1 >> y1 >> k1;
        int c2, m2, y2, k2;
        cin >> c2 >> m2 >> y2 >> k2;

        int c3 = min(c1, min(c, c2));
        int m3 = min(m1, min(m, m2));
        int y3 = min(y1, min(y, y2));
        int k3 = min(k1, min(k, k2));

        int sum = c3 + m3 + y3 + k3;
        if (sum == 1000000)
            cout << "Case #" << j << ": " << c3 << " " << m3 << " " << y3 << " " << k3 << endl;

        else if (sum < 1000000)
        {
            cout << "Case #" << j << ": "
                 << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "Case #" << j << ": " << c3 << " ";
            if ((c3 + m3) <= 1000000)
            {
                cout << m3 << " ";
                if (c3 + m3 + y3 <= 1000000)
                {
                    cout << y3 << " ";
                        int sum=c3+m3+y3+k3;
                    cout <<k3-(sum-1000000)<<endl;
                }
                else
                    cout << y3 - (c3 + m3 +y3-1000000 ) << " " << 0 << endl;
            }
            else
                cout << m3 -(c3+m3-1000000) << " " << 0 << " " << 0 << endl;
        }
        j++;
    }
}