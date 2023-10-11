#include <iostream>
using namespace std;

int main()
{
int n,sum=0,m;
   cout<<"Enter a 4 digit number:";
   cin>>n;
   
   while(n != 0)
   {
   	
   	if ( 999 < n < 10000)
   	
   	   {
   	     m=n%10;
         sum+=m;
         n=n/10;
	   }
	     
	else
	    
		{
			cout<<"wrong";
		}    
      
   }
   
   cout<<"majmooh : "<<sum<<endl;
    




}	
