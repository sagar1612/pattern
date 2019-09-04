#include <iostream>

using namespace std;

int main()
{ 
	int  n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int k=0;
		while(k!=i-1)
		{
			cout<<" ";
			k++;
		}
	      for(int j=i;j<=i;j++)
	      {
	      	cout<< " * ";
	      }
           cout<<endl;
       }
	      return 0;
}