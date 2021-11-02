#include<iostream>

using namespace std;
int main()
{
	int numbr  = 0;
	int fact = 1;
	cout<<"please enter number :";
	cin>>numbr;	
	int i = 1;
	while(1)
	{
		fact = fact*i;
		if (fact >= numbr )
	    break;
		else
		i++;
	}
	if (fact == numbr)
	cout << "yes";
    else
	cout << "no"; 
}

