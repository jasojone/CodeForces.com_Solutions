// https://codeforces.com/group/mN7e5eVD7Q/contest/369262/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9 + 7;
int main()
{

    string n;
    cin >> n;

    // when you cin an string it will take in the entire block and stop at an empty space.
    // 10 ^8th in a second

    if (isupper(n[0]) == false)
    {
        n[0] = toupper(n[0]); // to upper is not mutative and a function and will return a value
        cout << n;
    } 
    else
        cout << n;
    return 0;
}