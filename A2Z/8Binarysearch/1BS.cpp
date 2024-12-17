#include <bits/stdc++.h>
using namespace std;


int main(){
int n = 11;

int target= 245;



    int nums[n]={ 2,3,4,5,23,89,90,130,243,245,788};

int low = 0;
int high = n-1;



while (low<=high)
{
    int mid =(low+high)/2;


    if (nums[mid]== target)   cout<<mid;

    else if(target> nums[mid])   low= mid+1;

    else high= mid -1;
    
}








}




