
// PLEASE LIKE SHARE AND SUBSCRIBE 
// Welcome back guys to our new video
//This video is basically the second part of the factorial video 1st ,in which we are 
//failed to calculate the factorial of a large no.
//In this video we will be discussing a method by which we can make it possible witout
// any error
// So let's begin

#include<bits/stdc++.h>
using namespace std;

int factorial_calculation(int array[],int res_size,int num)// it is the calculation part which return the size of array or no of digits in a array
{
     int i, carry=0,data;
    for(i=1;i<=res_size;i++)
    {
        data=array[i]*num+carry;
        carry=data/10;
        array[i]=data%10;
    }
    if(carry!=0)
    {
       array[i]=carry%10;
       carry=carry/10;
       res_size++;
       i++;
    }
return res_size;

}

void factorial(int num)    //whose factorial is to be calculated
{
    int i,res_size=1,array[10000];;// In this method we will be using array to store the individual digits of 
                                // a number
    array[0]=1;
    array[1]=1;

    for(i=2;i<=num;i++)
    { 
      res_size= factorial_calculation(array,res_size,i);
    }
    for(i=res_size;i>0;i--)
    {
        cout<<array[i];
    }
    cout<<"\n";
}


int main ()
{
    int res_size,num;
    cout<<"Enter the value :";
    cin>>num;
    factorial(num);


}

// So as u Seen that using this method we can calculate the factorial of large nos also

// pls like Share and Subscribe
 // code in Description 
  //thank U for 