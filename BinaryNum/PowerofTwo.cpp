#include<iostream>
using namespace std;
bool ispoweroftwo(int num){
    return (num>0) && ((num &(num-1))==0);
}
int main()
{
    int num;
    cin>>num;
    if(ispoweroftwo(num)){
        cout << "Number is power of two"<<endl;
    }else{
        cout << "Number is not power of two"<<endl;
    }
return 0;
}