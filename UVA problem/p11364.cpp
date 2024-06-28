#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, min, max;
    cin >> t;
    while (t--)
    {
        int n,distance;
        min = 99; max = 0;
        cin >>n;

        for (int i = 0; i < n; ++i)
        {
            cin>>distance;

            if (distance < min)
                min = distance;
            if (distance > max)
                max = distance;
        }
        int md = (max-min)*2;
        cout<<md<<endl;

    }
    return 0;
}
