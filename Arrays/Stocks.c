#include<stdio.h>
int stocks(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[i-1])
            profit+=(arr[i]-arr[i-1]);
    return profit;
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int res=stocks(arr,n);
    printf("%d",res);
    return 0;
}