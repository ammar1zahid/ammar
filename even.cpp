#include<iostream>
using namespace std;

int main()
{
	int n,i=10;
	
	cout<<"Enter your number"<<endl;
	cin>>n;
	
	cout << "\nList of Even Numbers from 1 to " << n << " are\n"; 
	while( i < n)    
	// (1 < 10)
	//(2 < 10)
	//(3 < 10)
	//(4 < 10)
	//(5 < 10)
	//(6 < 10)
	//(7 < 10)
	//(8 < 10)
	//(9 < 10)
	//(10 < 10)
  	{
  		if ( i % 2 == 0 )
  		{
  			cout << i <<" ";
		}	
		i++;
		
		
  	
  	}
  	
	cout<<"end of program"<<endl;
		
 	return 0;
	
}
