// In this video we will print a complex diamond pattern
#include<iostream>
using namespace std;

int main ()
{
    int n,i,j,temp,k,value;
    cin>>n;

    for(i=0;i<=n;i++)
{

    temp=n-i;
    while(temp)
    {
        cout<<"  ";
        temp--;
    }
    value=0;
    while(value!=i)
    {
        cout<<value<<" ";
        value++;
    }
    while(value)
    {
        cout<<value<<" ";
        value--;
    }
    cout<<value<<"";
    cout<<"\n";
}
for(i=1;i<=n;i++)
{
  temp=i;
  while(temp)
  {
      cout<<"  ";
      temp--;
  }

  value=0;
  while(value!=n-i)
  {
      cout<<value<<" ";
      value++;
  }
  while(value)
  {
      cout<<value<<" ";
      value--;
  }
  cout<<value<<"";
  cout<<"\n";





}
return 0;
}
