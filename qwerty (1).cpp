


# include <iostream>
using namespace std;
int main()
{
	int h,j,n;
	cin>>n;
	for (h=1;h<=n;h++)
	{
		cout<<endl;
		for (j=1;j<=n;j++)
		{
			if ((h+j)>=0)
			{
			cout<<j;
			}
			else
				{
				cout<<0;
				}
		}
	
	}
}
