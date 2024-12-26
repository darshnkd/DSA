#include<iostream>
using namespace std;

void calculate(int array[],int size ,int &sum , int &product ){
    sum=0, product = 1;
    for(int i=0;i<size;i++){
        sum+=array[i];
        product*=array[i];

    }

}
int main()
{
    int array[] =  {1,3,4,6,7,8};
    int size = sizeof(array) / sizeof(array[0]);
    int sum,product;

    calculate(array,size,sum,product);

    cout << "the sum is :"<<sum<<endl;
    cout << "the product is "<<product<<endl;
    



return 0;
}