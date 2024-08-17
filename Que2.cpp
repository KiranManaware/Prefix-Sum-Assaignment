// Que2. Find Pivot Index leetcode[724]
#include<iostream>
using namespace std;
#include <vector>
int pivotIndex(vector<int>& nums) {
      int n=nums.size();
      int leftsum=0,rightsum=0;
      for(int x:nums) rightsum+=x;
      for(int i=0;i<n;i++){
          rightsum-=nums[i];
          if(leftsum==rightsum) return i;
          leftsum+=nums[i];
      }
      return -1;
}
int main(){
    vector<int> v={1,7,3,6,5,6};
    cout<<pivotIndex(v);
}