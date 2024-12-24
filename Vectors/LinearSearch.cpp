#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>&nums ,int target,int size){
    for(int i =0;i<size;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;

}
int main()
{
    vector<int>nums = {12,2,34,56,78,22,88};
    int size = nums.size();
    int target =88;

    cout << LinearSearch(nums,target,size)<<endl;
return 0;
}