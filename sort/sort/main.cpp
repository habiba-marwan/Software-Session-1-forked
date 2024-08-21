//
//  main.cpp
//  sort
//
//  Created by Habiba Elkamary on 21/08/2024.
//

#include <iostream>
using namespace std;
void merged(int f ,int l, int mid , int *arr);
void display(int*arr,int n);
void mergeSort(int *arr,int f,int l);



void mergeSort(int *arr,int f,int l){
    if (f<l) {
        int mid =(f+l)/2;
        mergeSort(arr, f, mid);
        mergeSort(arr, mid+1, l);
        merged(f, l, mid, arr);
    }
}
void merged(int f ,int l, int mid , int *arr){
        int n1=(mid-f)+1;
        int n2=(l-mid);
        int tmp1[n1],tmp2[n2];
        for (int i=0; i<n1; i++)
            tmp1[i]=arr[f+i];
        for (int i=0; i<n2; i++)
            tmp2[i]=arr[mid+1+i];
    int c1=0,c2=0;
    for (int i=f; i<=l; i++){
        if (tmp1[c1]<tmp2[c2]) {
            arr[i]=tmp1[c1];
            c1++;
        }
        else{
            arr[i]=tmp2[c2];
            c2++;
        }
    }
}
void display(int*arr,int n){
    for (int i=0; i<n; i++) {
    std ::printf("%d ",arr[i]);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    std ::printf("please enter number of elements in your desired list\n");
    std:: scanf("%d",&n);
    int arr[n];
    std ::printf("please enter  elements of your list\n");
    for (int i=0; i<n; i++) {
        std:: scanf("%d",&arr[i]);
    }
    mergeSort(arr, 0, n-1);
    display(arr, n);
    return 0;
}
