#include<iostream>
using namespace std;
int main()
{
    int array[]={98,87,78,66,97,56,33,24,34,};
    int size=9;

    int smallest=INT_MAX;
    int largest = INT_MIN;
    int idx_smallest =-1;
    int idx_largest = -1;

    for(int i=0;i<size;i++){
        if(array[i]<smallest){
            smallest = array[i];
            idx_smallest =i;

        }
    }
    cout << "Smallest Number is: "<< smallest << " at index "<< idx_smallest<<endl;

    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest = array[i];
            idx_largest=i;
        }
    }
    cout <<"Largest Number is :"<<largest<<" at index "<<idx_largest<<endl;



return 0;
}