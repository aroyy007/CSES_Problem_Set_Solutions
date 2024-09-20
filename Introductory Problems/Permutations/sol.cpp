#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <map>
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]
 
int sum_d(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
 
int main()
{
    optimize();
 
    ll n;
    cin >> n;
 
    vector<ll> a;
    // ain(a, n);
 
    // ll s = 0;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
 
    for (ll i = n; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            a.push_back(i);
        }
    }
    for (ll i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            a.push_back(i);
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
 
    return 0;
}
