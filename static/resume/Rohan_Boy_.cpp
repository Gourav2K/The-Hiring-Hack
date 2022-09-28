#include<iostream>

using namespace std;

void swap( int &a, int &b){
    int t;
    t=a;
    a=b;
    b=t;
}

void bubble_sort(int arr[], int len){
    int i, j; 
    for (i = 0; i < len-1; i++)     
        for (j = 0; j < len-i-1; j++) 
            if (arr[j] > arr[j+1]) 
                swap(arr[j], arr[j+1]); 
}

void print(int A[], int len){
    for(int i =0; i< len; i++){
        cout << A[i]<<"\t";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {45,10,20,80,30,60,50,110,100,170,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    bubble_sort(arr,n);
    print(arr,n);
}