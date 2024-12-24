#include<iostream>
using namespace std;

int BinToDec(int binNum){
    int ans=0,pow=1;

    while(binNum>0){
        int rem = binNum%10;
        binNum/=10;

        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main()
{
    int binNum = 1111111111;
    cout << BinToDec(binNum);

    
return 0;
}