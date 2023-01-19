#include<iostream>
using namespace std;

int binarysearch ( int arr[], int size, int key){

int start= 0;
int end= size -1;
int mid = ( start + end)/2;




while (start<=end){
    if( arr [mid] == key){
        return mid;
    }
    if (key > arr[mid]){
// go to the right side of the array
        start= mid +1;

    }else{
        end= mid -1;
    }

mid=( start + end)/2;

    }
    return -1;        
    }
int main(){
int even [6]= {2,4,6,10,12,18};

int evenIndex= binarysearch (even,6,6);
cout << "Index of 6 is" << evenIndex << endl;
return 0;}
