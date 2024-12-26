#include<iostream>
using namespace std;

void Swap(int array[],int size){
    int max=INT_MIN;
    int min=INT_MAX;
    int max_index = -1;
    int min_index = -1;

    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            max_index=i;
        }
        if(array[i]<min){
            min=array[i];
            min_index=i;
        }
    
    }
    swap(array[max_index],array[min_index]);
    
}
int main()
{
    int array[]={23,34,66,77,88,98,90,88};
    int size = sizeof(array) / sizeof(array[0]);

    Swap(array,size);

    for(int i=0;i<size;i++){
        cout << array[i]<<" ";
    }

return 0;
}