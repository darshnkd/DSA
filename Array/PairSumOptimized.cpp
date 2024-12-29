#include <iostream>
using namespace std;
#include<vector>

vector<int>PairSum(vector<int>nums,int target){ // optimized way complexity is O(n)
    int n=nums.size();
    vector<int>result;
    
    int i=0, j=n-1;
    
    while(i<j){
       int ps = nums[i]+nums[j];
        if(ps>target){
            j--;
        }else if(ps<target){
            i++;
            
        }else{
            result.push_back(i);
            result.push_back(j);
            return result;
            
        }
    }
    return result;
    
}

int main()
{
    vector<int>nums={1,2,4,5,7,7,8};
    int target=12;
    vector<int>result = PairSum(nums,target);
    cout << result[0]<<", "<<result[1]<<endl;

    

    return 0;
}