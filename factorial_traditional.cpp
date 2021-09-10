 

    // Hello World
    // This program is  to calculate the factorial of a number using 
    //traditional method
                    // Here we go

     #include<iostream>
     #define ll long long int
     using namespace std;

     // function declaration and defination
     ll Factorial(ll n)
     {
         if(n==1)
         return 1;
         else
         return n*Factorial(n-1);


     }               
 
 // procedding to the main program
 int main()
 {
      ll lower_limit,upper_limit,ans;
      cout<<"Enter the range in which the factorial is to be calculated \n";
      cout<<"pls write the upper and lower limit of the range \n";
      cin>>lower_limit>>upper_limit;
      for( ll i=lower_limit;i<=upper_limit;i++)
      {
          cout << "The factorial of "<<i<<"is :"<<Factorial(i)<<"\n";
          
      }
      return 0;
    

 }
 // lets try for bigger numbers



  // As you seen  the system started misbehaving when we try it for larger values
  // This is the traditional way of calculating the factorial 
  // next video on this topic will be very cool as it would be above all the  methods
  //of calculating the factorial


  // pls like Share and Subscribe
  // code in Description 
  //thank U for Watching 