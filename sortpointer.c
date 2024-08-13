#include<stdio.h>
void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int* comp1(int a,int b){
    if(a>b){
        return 1;
    }else{
        return 0;
    }
}
int *comp2(int a,int b){
    if(a<b){
        return 1;
    }else{
        return 0;
    }
}
void bubblesort(int* arr,int n,int *comp(int,int)){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(comp(arr[j],arr[j+1])){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void print(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={5,4,1,2,3,7,8,9,11};
    bubblesort(arr,9,comp1);
    print(arr,9);
    bubblesort(arr,9,comp2);
    print(arr,9);
    return 0;
}
