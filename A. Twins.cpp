#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll tsum = 0;
    vll arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        tsum += arr[i];
    }

    ll halfsum = tsum / 2;

    sort(all(arr));

    ll sum1 = 0;
    ll cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += arr[i];
        cnt++;
        if (sum1 > halfsum)
        {
            break;
        }
        
    }
    cout<<cnt<<endl;
}