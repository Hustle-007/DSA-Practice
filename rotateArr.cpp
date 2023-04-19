#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    // int N{};
    // cin >> N;

    // int arr[N], r[N];

    // cout << "Enter array elements: " << endl;

    int N{2}, arr[N]{1,2}, r[N];

    // for(auto c: arr) {
    //     cin >> c;
    // }
    r[0] = arr[N-1];
    for(size_t i{1}; i<N; i++) {
        r[i] = arr[i-1];
    }

    for(size_t i{}; i<N; i++) {
        arr[i] = r[i];
    }
    
    for(size_t i{}; i<N; i++)
        cout << arr[i] << " ";

    return 0;

}