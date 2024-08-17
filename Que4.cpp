// Que 4. Corporate flight booking leetcode[1109]
#include<iostream>
#include <vector>
using namespace std;
vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> res(n,0);
    for(int i=0;i<bookings.size();i++){
        res[bookings[i][0]-1]+=bookings[i][2];
        if(bookings[i][1]<n) res[bookings[i][1]]-=bookings[i][2];
    }
    for(int i=1;i<n;i++){
        res[i]+=res[i-1];
    }
    return res;
}
int main()
{
    vector<vector<int>> bookings={{1,2,10},{2,3,20},{2,5,25}};
    vector<int> res=corpFlightBookings(bookings,5);
    for(int x: res) cout<<x<<" ";
    
    return 0;
}