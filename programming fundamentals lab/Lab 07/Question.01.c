#include<stdio.h>
int main(){
	int i,sum;
	printf("Enter the index of array :");
	scanf("%d",&i);
	int arr[i];
	for(int j=0 ; j<=i ; j++){
		printf("Enter the number :");
		scanf("%d", & arr[j]);
		sum += arr[j];
	}
		printf("Sum :%d",sum);
		return 0;
}