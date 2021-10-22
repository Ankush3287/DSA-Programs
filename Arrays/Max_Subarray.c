#include<stdio.h>
int maxSum(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        if(maxEnding+arr[i]>arr[i])
            maxEnding+=arr[i];
        else
            maxEnding=arr[i];
        if(maxEnding>res)
            res=maxEnding;
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
    int res =maxSum(arr,n);
    printf("%d",res);
    return 0;
}