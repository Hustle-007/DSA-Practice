#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
// void solve()
// {
    
// }
int decToBin(int n) {
    int i{}, ans{};

    while(n!=0) {
        int bit = n & 1;

        ans = ((bit*pow(10, i)) + ans);
        n >>= 1;
        i++;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n{};
    cout << "Enter a negative number: \n" << endl;
    cin >> n;

    // Calculate the binary representation of the number
    n = abs(n);
    int binInp = decToBin(n);

    cout << "The binary representation of " << n << " is: " << binInp << endl;

    // Take one's complement of the input
    string bitString = to_string(binInp);
    int strLenght = bitString.length();

    for( size_t i{}; i< bitString.size(); i++ ) {
        if(bitString[i] == '0')
            bitString[i] = '1';
        else if(bitString[i] == '1') {
            bitString[i] = '0';
        }
    }

    cout << "Ones complement of " << binInp << " is: " << bitString << endl;

    // Take two's complement of the input by adding one
    bool carry {false};
    for(size_t i{strLenght-1}; i>=0; --i ) {
        if( bitString.at(i) == 0) {
            bitString.at(i) = 1;
            break;
        } else if( bitString.at(i) == 1 ) {
            if(carry) {
                
            }
            carry = true;
            bitString.at(i) = 0;
        }
    }

}