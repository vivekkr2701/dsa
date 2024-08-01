// Name - Vivek Kumar Roll No - 11500323100
#include <stdio.h>
int binary(int low, int high, int key,int * arr){
		if(low>high)return -1;
		int mid = (low + high)/2;
		if(arr[mid]==key)return mid;
		if(arr[mid]>key) return binary(mid+1,high,key,arr);
		return binary(low,mid-1,key,arr);

}
void input( int * arr, int n){
		printf("Enter the value of the array");
		for(int i=0;i<n;i++){
				scanf("%d",&arr[i]);
		}
}
void main(){
		int arr[100];
		int n;
		printf("Enter the length of the array ");
		scanf("%d",&n);
		input(arr,n);
		int key;
		printf("Enter the key to be searched ");
		scanf("%d",&key);
		int result=binary(0,n-1,key,arr);
		if(result==-1)printf("Element not found ");
		printf("Element found at %d",result );
}
