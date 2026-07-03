//https://www.w3schools.com/dsa/dsa_algo_bubblesort.php
//https://www.w3schools.com/dsa/dsa_algo_selectionsort.php
//https://www.w3schools.com/dsa/dsa_algo_insertionsort.php

#include <iostream>
using namespace std;
 
//Pushes the largest element to the last by swapping
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool swapped = false; // FIX 2: Reset flag inside the loop
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
 
//Selects the smallest element and brings it back to front
void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp; // FIX 1: Used temp instead of arr[i]
        }
    }
}
 
// Insertion Sort
//Starts from arr[1],second index,takes that as key
//J=i-1
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main() {
    const int n = 5;
    int arr[n];
    // Input elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    // Output sorted elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
