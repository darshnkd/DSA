#include<iostream>
using namespace std;
int reverseint(int num,int reversed=0){
    if(num==0) return reversed;
    return reverseint(num/10,reversed*10+num%10);
}
int main()
{
    int num;
    cin>>num;
    cout <<reverseint(num)<<endl;
return 0;
}