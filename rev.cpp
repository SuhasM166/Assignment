#include<iostream>
using namespace std;
int main(){
    int a[5],rev[5],i,j;

    for(i=0,j=4;i<5;i++,j--){
        cout<<endl<<"Enter the elements :";
        cin>>a[i];

        rev[j]=a[i];
    }
cout<<endl<<"a[]               rev[]"<<endl;
    for(i=0;i<5;i++){
        cout<<endl<<"         "<<a[i]<<"        "<<rev[i];
    }
    
}