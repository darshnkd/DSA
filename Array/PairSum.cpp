#include <iostream>
using namespace std;
#include<vector>

vector<int>PairSum(vector<int>nums,int target){ // Bruteforce method complexity is O(n2)
    int n=nums.size();
    vector<int>result;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return{};
    
}

int main()
{
    vector<int>nums={1,2,4,5,7,9,9};
    int target=16;
    vector<int>result = PairSum(nums,target);
    cout << result[0]<<", "<<result[1]<<endl;

    return 0;
}