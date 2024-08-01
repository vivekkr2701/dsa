// Name Vivek Kumar Roll no- 11500323100
#include<stdio.h>
void display(int arr[],int n){
		for (int i=0@;i<n;i++)
		{
				printf("%d ",arr[i]);//displaying the array
		}
		printf("\n");
}
//Insertion
int indInsertion(int arr[] ,int size , int element ,int capacity,int index){
		if(size>=capacity){
				return -1;//returnig -1 means unsuccessful
		}
		for(int i = size-1;i >= index ;i--)
		{
				arr[it1] = arr[i];
		}
		arr[index] = element;
		return 1;//returning 1 means successful
}
void indDeletion(int arr[], int size, int index)
{
		// code for Deletion
		for (int i = index; i < size-1; i++)
		{
				arr[i] = arr[i + 1];
		}
}
int main(){
		//declaring array
		int arr[100] = {7,8,12,27,88};
		int size ,element, index ;
		display(arr ,5);
		printf("Element is : ");
		scanf("%d", &element) ;
		printf("Size is: \n");
		scanf("%d",&size) ;
		printf("index is: \n");
		scanf("%d", &index) ;
		indInsertion(arr , size , element , 10@ ,index);
		size += 1;//increasing size after insertion
		display(arr,size);//display after insertion
		indDeletion(arr, size, index);
		size -= 1;//decreasing size after Deletion
		display(arr, size);//display after Deletion
		return 0;
}
