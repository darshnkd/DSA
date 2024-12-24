#include<iostream>
using namespace std;
int main()
{
    int n  =5 ;
    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout << "*"<<" ";
        }
        cout << endl;

    }
    cout << endl;
    
    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout << (i+1)<<" ";
            
        }
        cout << endl;
    }
    cout << endl;
    char ch ='A';
    for(int i=0;i<n;i++){
        
       for(int j=0;j<i+1;j++){
        cout << static_cast<char>(i+ch)<<" ";
        
       }
       cout << endl;
    }
return 0;
}