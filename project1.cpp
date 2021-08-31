#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main ()
{
    int num;
    cin>>num;
    char ch='A';
    while(2){
    int i,j,k,l,m,x;
  
    if(num%2==0)
    num--;
  x=num/2+1;
    for(i=1;i<=x;i++)
    {
        system("Color 70");
        for(k=x-i;k>=0;k--)
        cout<<" ";
        for(l=1;l<=2*i-1;l++)
        if(i==x&&l==x)
         {
        
        cout<<ch++;
        }
        else{
       
         cout<<"*";}
         cout<<"\n";
    }
    
    l-=3;
    m=l;
    
    for(i=1;i<=num-x;i++)
    {
        system("Color B4");
        for(k=0;k<=i;k++)
        cout<<" ";
        for(m=l;m>=1;m--)
        cout<<"*";
        cout<<"\n";
        l-=2;
    }
    
    }
   return 0;
}
                 









                PLEASE LIKE SHARE AND SUBSCRIBE 