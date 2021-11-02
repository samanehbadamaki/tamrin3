#include<iostream>
using namespace std;
int main()
{
	int A , B , a ,b , tmp , kmm = 0;
	cout << "pleas enter adad 1 and 2 :";
	cin >> A >> B;
	
	a = A ;
	b = B ;
	
	while(1)
	{
		if (b == 0)
		break;
		tmp = a%b;
		a = b ;
		b = tmp;
	}
	kmm = (A*B)/a;
	cout << " KMM : "<<kmm;
	
}
