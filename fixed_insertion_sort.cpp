/*
Programmer: Alexander Nichols
Date: September 7th, 2016

A simple program in the first of my algorithm studies. 

This code uses a
fixed-length, pre-filled array and applies the Insertion Sort algorithm
as described in "Introduction to Algorithms" (3rd ed.) by Cormen,
Leisorson, Rivest, and Stein

*/
#include <iostream>
using namespace std;
int* insertionSort(int arr[]); //Point in declaration. Array types naturally decay to pointers in C++

int main() {
	int arr[6]={31,41,59,26,41,58};
	insertionSort(arr);
	return 0;
}

///BEGIN INSERTION SORT
int* insertionSort(int arr[]){
    int i,key;
    for(int j=1; j < 6; j++){
        key = arr[j];
        i = j-1;
        while((i > -1) && (arr[i] > key))
        {
            arr[i+1] = arr[i];
            i = i - 1;
            arr[i+1] = key;
        }
    }
    cout << "{" << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << ", " <<arr [5] << "}";
    return arr;
}