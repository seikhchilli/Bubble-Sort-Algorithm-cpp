#include<iostream>
using namespace std;

void bsort(int* ptr, int n){

  void order(int* , int*);
  int i, j;

  for(i = 0; i < n-1; i++){             //loop for comparing each position
    for(j = i+1; j <n; j++){           //loop for comparing ith position with all the following positions
      order(ptr+i, ptr+j);            //order the pointer contents
    }
  }
}

void order(int* numb1, int* numb2){     //orders two numbers
  if(*numb1 > *numb2){                 //if first is larger tha second
    int temp = *numb1;  	             //swap them
    *numb1 = *numb2;
    *numb2 = temp;
  }
}

int main(){
  const int N = 10;
  int arr[N] = {37, 84, 62, 91, 11, 65, 57, 28, 19, 49};                       //array size

  bsort(arr, N);                  //sort the array

  for(int i = 0; i < N; i++){
    cout<<arr[i]<<" ";          //print out the sorted array
  }
  cout<<endl;
  return 0;
}
