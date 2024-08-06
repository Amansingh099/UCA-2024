#include<stdio.h>
int main(){
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
}
