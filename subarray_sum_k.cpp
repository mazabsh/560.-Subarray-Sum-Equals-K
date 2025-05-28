#include<iostream> 
#include<vector> 
#include<unordered_map> 

using namespace std; 

class Solution{
public: 
      int subarraySum(vector<int>& nums, int k){
        unordered_map<int,int> mp; 
        mp[0]=1;
        int sum =0; int count=0; 
        for(int num:nums){
          sum+=num; 
          if(mp.count(sum-k)){
            count +=mp[sum-k]; 
          }
          mp[sum]++;  
        }
        return count; 
      }
}; 
int main(){
  vector<int> nums = {1,2,3}; 
  int k=3; 
  Solution sol; 
  cout << sol.subarraySum(nums,k)<< endl;
  return 0; 
}
