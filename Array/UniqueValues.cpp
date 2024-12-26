#include<iostream>
#include<unordered_map>
using namespace std;

void Uniquevalues(int array[],int size){
    unordered_map<int ,int >frequency_map;

    for(int i=0;i<size;i++){
        frequency_map[array[i]]++; // counting the frequency of the number
    }
    cout << " Unique values are: ";
    for(const auto& entry:frequency_map){
        if(entry.second==1){
            cout << entry.first << " ";
        }

    }

}

int main()
{
    int array[] = {23,56,78,998,78,56};
    int size = sizeof(array) / sizeof(array[0]);
    
    Uniquevalues(array,size);

return 0;
}