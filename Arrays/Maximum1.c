#include<stdio.h>
int maximum1(int arr[],int n){
    int res=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            res=0;
        }
        else{
            res++;
            if(res>max)
                max=res;
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int res=maximum1(arr,n);
    printf("%d",res);
    return 0;
}