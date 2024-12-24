#include<iostream>
using namespace std;

int DecToBin(int decNum){
    int ans=0,pow=1;

    while(decNum>0){
        int rem = decNum % 2;
        decNum /=2;

        ans+=(rem * pow);
        pow*=10;
    }
    return ans;
    
}
int main()
{
    int decNum ;

    for(int i=10;i<21;i++){
        cout << DecToBin(i)<<endl;
    }
    


return 0;
}