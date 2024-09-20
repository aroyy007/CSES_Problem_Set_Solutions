#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
 
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
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
 
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
 
// void solve()
// {
 
// }
// int sum_d(int n)
// {
//     int sum = 0;
//     while (n > 0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }
 
// int Calculate(string s)
// {
//     int sum = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             sum += s[i] - 'a' + 1;
//         }
//         else if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//             sum += s[i] - 'A' + 1;
//         }
//     }
//     while (sum > 9)
//     {
//         sum = sum_d(sum);
//     }
//     return sum;
// }
 
int main()
{
    optimize();
 
    ll n;
    cin >> n;
 
    vector<ll> v(n);
    ain(v, n);
 
    ll sum = n * (n + 1) / 2;
 
    ll sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += v[i];
    }
 
    cout << sum - sum1 << endl;
 
    return 0;
}
