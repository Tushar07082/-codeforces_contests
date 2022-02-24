#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                long long n;
                cin >> n;
                long long a[n];
                long long ans = 0;
                for (long long i = 0; i < n; i++)
                {
                        cin >> a[i];
                }
                if (n == 2)
                {
                        cout << 0 << "\n"
                             << a[0] << " " << a[1] << "\n";
                        continue;
                }

                for (long long i = 1; i < n - 2; i++)
                {
                        if (a[i] > a[i - 1] && a[i] > a[i + 1])
                        {
                                a[i + 1] = max(a[i], a[i + 2]);
                                ans++;
                        }
                }
                if (a[n - 2] > a[n - 1] && a[n - 2] > a[n - 3])
                {
                        a[n - 1] = a[n - 2];
                        ans++;
                }

                cout << ans << endl;
                for (long long i = 0; i < n; i++)
                {
                        cout << a[i] << " ";
                }
                cout << endl;
        }
}