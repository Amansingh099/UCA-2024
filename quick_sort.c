#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

void exch(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
int partition(int arr[], int s,int e){
    int pivot=arr[e];
    int j=s-1;
    for(int i=s;i<e;i++){
       if(arr[i]<pivot){
        j++;
	exch(arr,i,j);
       }
    }
    exch(arr,j+1,e);
    return j+1;
}
void quicksortalgo(int arr[],int s,int e){
     if(s>e)return;
     int pivot=partition(arr,s,e);
     quicksortalgo(arr,s,pivot-1);
     quicksortalgo(arr,pivot+1,e);
}
void quick_sort(int arr[],int n){
      quicksortalgo(arr,0,n-1);
      return;
}
void test_simple_input()
{
  int input[] = {5, 3, 1, 9, 7};
  int expected_output[] = {1, 3, 5, 7, 9};

  quick_sort(input, 5);

  for(int i = 0; i < 5; i++) assert(input[i] == expected_output[i]);
}

long long time_elapsed(int n)
{
  int *arr = (int *) malloc(n * sizeof(int));

  srand(time(NULL));
  for(int i = 0; i < n; i++) arr[i] = n-i;

  struct timeval before;
  gettimeofday(&before, NULL);
  long long before_millis = before.tv_sec*1000LL + before.tv_usec/1000;

  quick_sort(arr,n);
  struct timeval after;
  gettimeofday(&after, NULL);
  long long after_millis = after.tv_sec*1000LL + after.tv_usec/1000;

  return after_millis-before_millis;
}

int main()
{
    test_simple_input();

    long long t1 = time_elapsed(32000);
    long long t2 = time_elapsed(64000);
    
    printf("%lf\n", t2*1.0/t1);
    return 0;
}
