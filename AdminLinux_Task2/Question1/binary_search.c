#include <stdio.h>

int binary_search (int* x,int size,int key) 
{
	int i =0;
	int lo=0;
	int hi=size-1;
	for(i=0;i<size-1;i++)
	{
		int mid=hi+lo/2;
		if(x[mid]<key)
		{
			lo=mid+1;
		}
		else if(x[mid]>key)
		{
			hi=mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{

	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int key,index;
	printf("Enter the requiered Number\n");
	scanf("%d",&key);
	index=binary_search(arr,10,key);
	if(index!=-1)
	{
		printf("the requiered index is:%d\n",index);
	}
	else
	{
		printf("Not Found\n");
	}
	return 0;
}
		 


