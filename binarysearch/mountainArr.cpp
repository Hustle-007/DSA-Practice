#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int s{}, arr[]{2,4,6,8,5,1}, n{6}, e{n-1}, mid{(s+(e-s)/2)}, p{};

    while(  s< e ) {
        if(arr[mid] < arr[mid+1]) {
            s= mid+1;
        } else {
            e= mid;
        }
        mid = s+(e-s)/2;
    }

    cout << "Peak element is " << arr[s] << endl;

    return 0; 

}