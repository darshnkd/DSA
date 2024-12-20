#include<iostream>
using namespace std;
void primeN(int n){
    if(n<=1){
        cout << "Number is invalid";
    }
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            cout << "number is not prime "<<endl;

        }else{
            cout << "number is prime"<<endl;
        }

    }
}
    
    
int main()
{
    int n;
    cout << "Enter the number";
    cin>>n;
    primeN(n);



return 0;
}