#include <bits/stdc++.h>
using namespace std;



int  main(){
int   n = 9 ;

int arr[n]={1,1,2,2,3,5,5,4,4};



// for (int i = 0; i < n; i++)
// {
//  int num=arr[i];
//  int count=0;

// for (int j = 0; j < n; j++)
// {
     
// if (arr[j]==num)
// {


// count++;


// }



// }

// if (count==1)
// {

// cout<<num<< endl;

// }


// }


  int XOR=0;


for (int i = 0; i < n; i++)
{
XOR=XOR^arr[i];
}

cout<<XOR<<endl;


}