// Learn hashtable and then comeback.

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> result;
  vector<int> :: iterator it;
  
  for (size_t i{}; i < nums.size(); i++)
  {
    it = find(nums.begin()+i+1, nums.end(), target-nums.at(i));
    if(  it != nums.end() )
      result.push_back(i);
      result.push_back(it-nums.begin());
      return result;
  }
  return result;
}

int main(){
  vector<int> input = {3,2,4};
  int target = 6;
  vector<int> output = twoSum( input, target) ;

  for(  auto c: output )
    cout << c << endl;
  return 0;
}