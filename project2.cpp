#include<iostream>
#include<windows.h>
using namespace std;
int main ()
{
srand(time_t(NULL));
    double random_number;
    int i;
   cout<<"This is the program to show color effects in c++\n";
   cout<<"\n\n\n\n";
   cout<<"\t\t\tpress any key to see the effect";
   
     cin>>i;
     if(i==0)
     i++;
while(i)
{
   int number;
   random_number=(double)rand()/(double)RAND_MAX;
  // cout<<random_number<<"\n";
  random_number=random_number*100;
   number=random_number;
   // cout<<number<<"\n";
  HANDLE console_color;
    console_color = GetStdHandle(
        STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(console_color,number);
   cout<<"HELLO CODERS\n";
}

return 0;
    

}


  //PLEASE LIKE SHARE AND SUBSCRIBE 

//The loop is infinite while loop used here. Be careful when practising it.














