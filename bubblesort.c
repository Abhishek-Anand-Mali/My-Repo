#include<stdio.h>
#include<stdlib.h>
#define MAX 40
int n,arr[MAX];
void bubblesort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void main(){
    printf("Enter the size of array(MAX: 40):");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }
    //unsorted array
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    bubblesort(n,arr);
    //sorted array
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}