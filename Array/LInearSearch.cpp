#include<iostream>
using namespace std;
// Linear search

int LinearSearch(int array[], int size,int target){
    for(int i=0;i<size;i++){
        if(array[i]==target){
            return i;
        }
    }
    return -1;

}
int main()
{
    int array[]={12,3,4,13,4,13,56,7,8,8,45};
    int size = 11;
    int target = 45;

    cout <<LinearSearch(array,size,target)<<endl;


return 0;
}