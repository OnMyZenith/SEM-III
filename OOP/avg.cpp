#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Total Number Of Numebrs:";
    cin>>n;
    float sum=0;
    cout<<"Enter the Numebrs:\n";
    for(int i=0;i<n;i++)
    {
        int num=0;
        cin>>num;
        sum+=num;
    }
    cout<<"Average :"<<sum/n;
    return 0;
}
