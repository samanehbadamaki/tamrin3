#include<iostream>
using namespace std;
int main()
{
	int m , n = 0;
	cout << " please enter m &  n :";
	cin >> m >> n;
	
	for(int i = 1 ; i <= m ; i++)
	{
	    if(i%2 == 0)
		{
			for(int j = 1 ; j <= n ; j++)
			{
				if( j %2 == 0)
				{
						cout<<"#";
				}
				else
				cout <<"*";
		    }
	
			cout<<"\n\n";			
			
		}
		else
		{
				for(int j = 1 ; j <= n ; j++)
			{
				if( j %2 == 0)
				{
						cout<<"*";
				}
				else
				cout <<"#";
		    }
	
			cout<<"\n\n";	
		}
		
	
	}
	
}
