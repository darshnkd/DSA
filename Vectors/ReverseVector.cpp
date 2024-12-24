#include <iostream>
#include<vector>
using namespace std;

void ReverseVector(vector<int>&marks , int size ){
    int start = 0, end = size-1;
    while(start<end){
        swap(marks[start],marks[end]);
        start++;
        end--;
    }
    
}


int main()
{
    vector<int>marks = {12,34,56,78,99,56,66,77};
    int size = marks.size();
    
    ReverseVector(marks,size);
    for(int i=0;i<size;i++){
        cout << marks[i] << " ";
    }

    return 0;
}