#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter a number";
cin>>num;

while(num>0)
{
    if(num%2==0)
    {
       
        cout<<num<<"is even";
    }
else{
    cout<<num<<"isodd";
}
break;
}
return 0;
}