#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a[2][2],b[2][2],c[2][2],i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<endl<<"Enter the elements at a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];

            c[i][j]=a[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<endl<<"Enter the elements at b["<<i<<"]["<<j<<"] :";
            cin>>b[i][j];

            c[i][j]+=b[i][j]; 
        }
    }

    cout<<endl<<"A[2][2]      + B[2][2]           = C[2][2]"<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        cout<<setw(5)<<a[i][j];

        cout<<"       ";

        for(j=0;j<2;j++)
        cout<<setw(5)<<b[i][j];

        cout<<"       ";

        for(j=0;j<2;j++)
        cout<<setw(5)<<c[i][j];

        cout<<endl;
    }


}