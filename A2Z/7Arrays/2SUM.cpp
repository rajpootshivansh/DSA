#include <bits/stdc++.h>
using namespace std;


int main(){
int n= 5;
int arr[n]={2,6,5,8,11};



for (int i = 0; i < n; i++)
{
int target=11;
int sum=0;
  for (int j = i; j < n; j++)
  {
   sum=arr[i]+ arr[j];
   if (sum==target){
cout<<i<<endl;
cout<<j;
break;
   }
   
   
  }
  
}




}