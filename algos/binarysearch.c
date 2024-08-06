#include<stdio.h>
#include<stdbool.h>
int main(){
    int i=0;
    int j=9;
    int arr[9]={9,8,7,6,5,4,3,2,1};
    for(int i=0;i<9;i++){
       bool swapp=false;
       for(int j=0;j<8-i;j++){
           if(arr[j]>arr[j+1]){
              swapp=true;
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
           }

       }
       if(swapp==false){
               break;
       }
    }

    int mid=i+(j-i)/2;
    int target=9;
    while(i<=j){
      mid=i+(j-i)/2;
      if(arr[mid]==target)break;
      else if(arr[mid]<target)i=mid+1;
      else j=mid-1;
    }
    printf("target is at %d position",mid+1);
    return 0;

}
