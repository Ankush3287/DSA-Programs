#include<stdio.h>
int move(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main(){
    int arr[]={1,0,2,3,0,0,5};
    int n=7;
    move(arr,n);
    return 0;
}