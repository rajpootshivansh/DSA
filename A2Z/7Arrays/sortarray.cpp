#include <bits/stdc++.h>
using namespace std;

int swap(int a, int b){
int temp;

temp=a;
a=b;
b= temp;



}
int main (){
int n =12;

int arr [n]={0,1,2,0,1,2,1,2,0,0,0,1};


for (int i = 0; i < n; i++)
{
   if (arr[i] <=arr[i+1])
   {
   
swap(arr[i], arr[i+1]);

   }

   

}
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";

   }








}