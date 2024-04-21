#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N, i, j;
    while (cin >> N)
    {
        if (N == 0)
            break;
        int G = 0;

        for (i = 1; i < N; i++)
        {
            for (j = i + 1; j <= N; j++)

            {

                G += gcd(i, j);
            }
        }
        cout << G << endl;
    }
    return 0;
}
