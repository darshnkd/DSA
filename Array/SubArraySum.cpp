#include<iostream>
using namespace std;
int main()
{
    int array[]={12,10,-5,20,25,-10,15}; 
    int n = sizeof(array)/sizeof(array[0]); // print subarryas

    for(int st=0;st<=n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << "********************************************"<<endl;
    int maxsum=INT_MIN;                    // print the maximum subarraysum using the bruteforce method
    for(int st=0;st<=n;st++){
        int currntSum=0;
        for(int end=st;end<n;end++){
           currntSum+=array[end];
           maxsum=max(currntSum,maxsum);
        }
       
    }
    cout<< endl;
     cout << "Max sum is :"<<maxsum<<endl;
     cout << endl;
     cout << "********************************************"<<endl;
     cout << endl;
    
     int current_sum=0;
     int max_sum=INT_MIN;
     for(int i=0;i<n;i++){
        current_sum+=array[i];
        max_sum=max(max_sum,current_sum);
        if(max_sum<0) 
        current_sum=0;
     }
     cout << "Cadan's max sum is :"<<max_sum<<endl;
     cout<<endl;

return 0;
}