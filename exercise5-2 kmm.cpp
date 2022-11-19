#include <iostream>
using namespace std;
int main()
{
    int a, b, max;
    cout<<"\n Enter number 1 : ";
    cin>>a;
    cout<<"\n Enter number 2 : ";
    cin>>b;
    if(a > b) max = a;
    else max = b;
    while(true){
        if(max % a == 0 && max % b == 0) break;
        else ++max;
    }
    cout<<"LCM(kmm)is :"<<max;
    return 0;
}