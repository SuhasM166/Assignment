#include<iostream>
using namespace std;

int main(){
    int a[5],i,j,t;

    for(i=0;i<5;i++){
        cout<<endl<<"Enter the value:";
        cin>>a[i];
    }

    for(i=0;i<5;i++){
        for(j=0;j<5-1-i;j++){
            if(a[j]>a[j+1]){
            t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
        }
    }
    }
    cout<<endl<<"Sorted array";
    for(i=0;i<5;i++){
        cout<<endl<<a[i];
    }
}