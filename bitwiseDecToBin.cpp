#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n{}, ans{}, i{};

    cout << "Enter the number to be converted: " << endl;
    cin >> n;
    while (n!=0)
    {
        int bit = n & 1; // take rightmost bit of n
        ans += (bit * pow(10, i));

        n >>= 1; // divide by 2

        i++; // i is the iteration counter
    }
    

    cout << "The binary representation = " << ans << endl;

    return 0;
}