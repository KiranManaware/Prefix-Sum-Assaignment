// Que3. Find the Score of All Prefixes of an Array leetcode[2640]
#include<iostream>
#include <vector>
using namespace std;
vector<long long> findPrefixScore(vector<int>& nums) {
    int n=nums.size();
    vector<long long int> res(n);
    res[0]=2*nums[0];
    int maxi=nums[0];
    for(int i=1;i<n;i++){
        maxi=max(maxi,nums[i]);
        res[i]=nums[i]+res[i-1]+maxi;
    }
    return res;
}
int main()
{
    vector<int> v={2,3,7,5,10};
    vector<long long> res=findPrefixScore(v);
    for(auto x:res) cout<<x<<" ";
    return 0;
}