#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
void tcase()
{
    ll n;cin >> n;
    map<ll,ll>m;
    ll t,mx=n;
    for (int i = 1;i <= n;i++)
    {
        cin >> t;
        m[t]++;
        while (m[mx])
        {
            cout << mx << " ";
            mx--;
        }
        cout << "\n";
    }
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}