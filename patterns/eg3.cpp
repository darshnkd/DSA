#include<iostream>
using namespace std;
int main()
{
    int n=7;
    for(int i=0;i<n;i++){
        for(int j=1;j<i+1;j++){
            cout << j << " "; 

        }
        cout <<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){ /// reverse patterns
            cout<<j<<" ";
        }
        cout <<endl;
    }
return 0;
}