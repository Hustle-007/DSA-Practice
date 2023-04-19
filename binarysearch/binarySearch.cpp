#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int midCalc(int start, int end) {
    return ((start) + (end-start)/2); // two avoid two large numbers adding up and going out of range./
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> numbers{};
    int n{}, key{}, value{};
    cout << "Enter the number of elements:" << endl;
    cin >> n;
    cout << "Enter an array in increasing order: "<< endl;


    for(size_t i{}; i<n; i++)
    {
        cin >> value;
        numbers.push_back(value);
    }

    cout<< "Enter the number to find: "<< endl;
    cin >> key;

    // implement binary search
    int start{}, end{n-1};
    int mid = midCalc(start, end);

    while (start<=end)
    {
        if(key == numbers.at(mid) ) {
            cout << "The element is found at index "<< mid<< endl;
            return 0;
        } else if( key > numbers.at(mid) ) {
            start = mid+1;
        } else {
            end = mid -1;
        }
        mid = midCalc(start, end);
    }
    cout << "Element is not present inside the array" << endl;
    return 0;

}