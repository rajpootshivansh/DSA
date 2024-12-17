#include <iostream>
using namespace std;



// void swap(int a,int b){

//     int temp=a;
//     a=b;
//     b= temp;

// }

// void asap(int l,int r ,int arr [])
// {
   
//     if (l >= r)
//     {
//         return ;
//     }
//     else
//         swap(arr[l], arr[r]);
//         asap(l+1,r-1,arr);
// }





// int main()
// {
//     int arr[]={5,4,3,2,1};

//      int n = sizeof(arr) / sizeof(arr[0]);
// asap(0,n-1,arr);
//       for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }


// return 0;


// }

//reverse an array

void f(int i,int arr[], int n){

    if(i>=n/2)
    return;
    swap( arr[i],arr[n-i-1]);
    f(i+1,arr,n);

}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n; i++)cin>>arr[i];
    f(0,arr,n);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
  
    return 0;
}




// checkstring is palin drome



bool f(int i, string &s){

    if (i>= s.size()/2) return true;
    if(s[i] !=s[s.size()-i-1]) return false;

   f(i+1,s);
    
}
int main(){

    string s="NAMAN";
    cout<<f(0,5);
    return 0;
}