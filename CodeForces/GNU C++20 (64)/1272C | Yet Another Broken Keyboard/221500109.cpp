#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return  a.second > b.second;
}
 
 
//vector<ll> getDivisors(ll n)
//{
//    vector<ll>vec;
//    // Note that this loop runs till square root
//    for (ll i = 1; i <= sqrtl(n); i++)
//    {
//        if (n % i == 0)
//        {
//            // If divisors are equal, print only one
//            if (n / i == i)
//                vec.push_back(i);
//
//            else // Otherwise print both
//            {
//                vec.push_back(i);
//                vec.push_back( n / i);
//            }
//        }
//    }
//    return vec;
//}
bool if_prime(string n)
{
    int num = stoi(n);
    for (int i = 2;i * i <= num;++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return 1;
}
 
void tcase()
{
    int n, k;
    ll ans = 0;
    cin >> n >> k;
    vector<char>vec(k);
    string w;cin >> w;
    for (int i = 0;i < k;i++) cin >> vec[i];
    for (int i = 0;i < n;i++)
    {
        if (find(vec.begin(), vec.end(), w[i]) != vec.end())
        {
            ll s = 1;
            for (int j = i + 1;j < n;j++)
            {
                if (find(vec.begin(), vec.end(), w[j]) != vec.end())
                {
                    s++;
                    i = j;
                }
                else break;
            }
            ans += (s * (s + 1) / 2);
        }
    }
    cout << ans << "\n";
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}