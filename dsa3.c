// Name - Vivek Kumar Roll No - 11500323100
#include <stdio.h>
int lsearch(int * arr ,int n ,int key){

		for(int i=0;i<n;i++){
				if(arr[i]==key)return i;
		}
		return -1;
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
		int result=lsearch(arr,n,key);
		if(result==-1)printf("Element not found ");
		printf("Element found at %d",result );
}
