#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int x1, y1, x2, y2, x3, y3;
                cout << fixed;
                cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
                if (y1 == y2 && y3 < y1)
                {
                        double x = abs(x2 - x1);
                        cout << x << endl;
                }
                else if (y1 == y3 && y2 < y1)
                {
                        double x = abs(x3 - x1);
                        cout << x << endl;
                }
                else if (y3 == y2 && y1 < y2)
                {
                        double x = abs(x3 - x2);
                        cout << x << endl;
                }
                else
                {
                        double x = 0;
                        cout << x << endl;
                }
        }
}