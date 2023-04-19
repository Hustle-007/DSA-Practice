#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int firstOcc (int arr[], int n, int k) {
    int s{}, e{n-1}, mid{s+(e-s)/2}, ans{-1};

    while(s<=e) {
        if(k == arr[mid]) {
            ans = mid;
            e=mid-1;
        } else if( k > arr[mid] ) {
            s=mid+1;
        } else {
            e= mid - 1;
        }
        mid = (s + (e-s)/2);
    }
    return ans;
}

int lastOcc (int arr[], int n, int k) {
    int s{}, e{n-1}, mid{s+(e-s)/2}, ans{-1};

    while(s<=e) {
        if(k == arr[mid]) {
            ans = mid;
            s=mid+1;
        } else if( k > arr[mid] ) {
            s=mid+1;
        } else {
            e= mid - 1;
        }
        mid = (s + (e-s)/2);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[] {0, 0, 1, 1, 2, 2, 2, 2};
    int n{8}, k{2};

    cout << "First occurrence of 2 : " << firstOcc(arr, n, k) << endl;
    cout<< " Last occurrence of 2 : " << lastOcc(arr, n, k) << endl;

    return 0;
}