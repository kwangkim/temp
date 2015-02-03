#include <iostream>
using namespace std;
void swap(int *p,int * q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void array_print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void bubble(int a[], int n){
    while(n>=2){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(&a[i],&a[i+1]);
            }
        }
        n--;
    }
}
int main() {
    int a[10]={1,3,8,4,7,5,0,9,6,2};
    bubble(a,10);
    array_print(a,10);
}
