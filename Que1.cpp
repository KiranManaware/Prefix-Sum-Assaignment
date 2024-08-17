//Que1 :Test Result Code 303. Range Sum Query - Immutable
#include<iostream>
using namespace std;
#include <vector>
class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        pre=vector<int> (nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return pre[right];
        else return pre[right]-pre[left-1];
    }
};