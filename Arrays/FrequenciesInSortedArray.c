#include<stdio.h>
void frequencies(int arr[],int n){
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            c++;
        }
        else{
            printf("%d %d\n",arr[i],c);
            c=1;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    frequencies(arr,n);
    return 0;
}