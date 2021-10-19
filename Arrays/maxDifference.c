#include<stdio.h>
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if((arr[i]-min)>res)
            res=arr[i]-min;
        if(arr[i]<min)
            min=arr[i];
    }
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int res=maxDiff(arr,n);
    printf("%d",res);
    return 0;
}