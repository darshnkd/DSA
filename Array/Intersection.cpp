#include<iostream>
#include<unordered_set>
using namespace std;

void intersection(int array1[], int array2[], int size1,int size2){
    unordered_set<int>set1;

    
    for(int i=0;i<size1;i++){
        set1.insert(array1[i]); // add array1 to set 1
    }

    for(int i=0;i<size2;i++){  //  check the same element in the both array
        if(set1.count(array2[i])){ 
            cout << array2[i]<<" ";
            set1.erase(array2[i]);
        }
    }
    cout << endl;

}
int main()
{
    int array1[]={12,34,56,77,78,99};
    int array2[]={11,33,34,66,88,99,99};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    intersection(array1,array2,size1,size2);

return 0;
}