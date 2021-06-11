#include <iostream>
using namespace std;
int main()
{
    int a[] = {3, 1, 2, 4, 0, 1, 3, 2};

    int n = sizeof(a) / sizeof(a[0]);
     //int fact=1;
    // for (int i = 1; i <=5; i++)
    // {
    //     fact*=i;
    // }
    // cout<<fact;

    // int l[n]; //left array
    // int r[n]; //right array
    // l[0] = a[0];
    // r[n - 1] = a[n - 1];
    // for (int i = 1; i <= n - 1; i++)
    // {
    //     l[i] = max(l[i - 1], a[i]);
    // }
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     r[i] = max(r[i + 1], a[i]);
    // }
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     cout << l[i];
    //     cout << r[i];
    // }
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans += min(l[i], r[i]) - a[i];
    // }
    // cout << "Ans:-" << ans;
}