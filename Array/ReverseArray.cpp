#include<iostream>
using namespace std;
void reverse(int array[],int size){
    int start=0, end =size-1;

    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    

}
int main()
{
    int array[]={12,3,7,9,8,8};
    int size = 6;

    reverse(array,size);

    for(int i=0;i<size;i++){
        cout << array[i]<<" ";
    }
    cout << endl;
return 0;
}