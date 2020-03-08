#include<iostream>
using namespace std;
int main()
{
   /*	int n,i,j=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int brr[n];
	int p=1;
	for(i=0;i<n;i++)
	{
		if(arr[i]<=arr[i+1])
		{
			p++;
			
		}
		else
            {
			   brr[j]=p;
               p=1;
               j++;
			}	
	}
	for(i=0;i<2;i++)
	{
		cout<<brr[i]<<endl;
	}*/
	 int i,j,p,brr[4];
    int arr[4];
    for(i=0;i<4;i++)
    {cin>>arr[i];
	}
	 for(i=0;i<4;i++)
    {cout<<arr[i]<<endl;
	}
    
    
    cout<<"sarfaraj";
    
    
	for(i=0;i<4;i++)
	{
		if(arr[i]<=arr[i+1])
		{
			p++;
			
		}
		else
            {
			   brr[j]=p;
               p=1;
               j++;
			}
		}
	//	cout<<"sarfaraj";
	
	return 0;
}
