#include<iostream>
using namespace std;
int insertionsort(int arr[], int s)
{
	int current,i,j,count=0;
	for(i=1;i<s;i++)
	{
		current=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(current<arr[j])
			{
				arr[j+1]=arr[j];
				count++;
			}
			else
				break;
		}
		arr[j+1]=current;
	}
	return count;
}
int main()
{
	int t,n,i,res;
	int arr[100000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		res=insertionsort(arr,n);
		cout<<res<<endl;
	}
	return 0;
}