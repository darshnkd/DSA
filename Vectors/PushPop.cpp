#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(21);
    vec.push_back(22);
    vec.push_back(23);
    vec.push_back(24);
    vec.push_back(25);
    
    cout <<"size: "<< vec.size()<< endl;
    cout << vec.front() << endl;
    cout << "capacity: "<<vec.capacity()<<endl;

 
return 0;
}