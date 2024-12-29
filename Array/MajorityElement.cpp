#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>&nums){
    int n=nums.size();
     for(int num:nums){
        int freq=0;
        for(int val:nums){
            if(num==val){
                freq++;
            }
            
        }   if(freq>n/2){
                return num;
            }
     }
     return -1;
}

int main()
{
    vector<int>nums={1,3,2,4,1,1,1};
    int n=nums.size();
    
    cout << majorityelement(nums)<<endl;

    



return 0;
}