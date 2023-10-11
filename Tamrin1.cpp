#include <iostream>
using namespace std;

int main()
{
	cout<<"pleas enter 3*3 arrey :\n";
    int A[3][3];
    int max;
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
       
     cin>>A[i][j];
     
	 max=A[0][0];
	 
     for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        
      if(A[i][j]>max)
      {
      	max = A[i][j];	
	  }
	  
     cout<<"max is :"<<max;
     return 0;
}
