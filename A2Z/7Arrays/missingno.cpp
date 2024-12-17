#include <bits/stdc++.h>
using namespace std;

int main()
{

    //    my approach

    // int n = 6;

    // int arr[n]={1,2,3,4,5,7};

    // for (int i = 0; i < n-1; i++)
    // {
    // if (arr[i]+1 !=  arr[i+1])

    // cout << arr[i+1]-1;
    // else

    // cout<<" ";

    // }

    // brute

    // int n =5 ;
    // int flag;

    // int arr[n] = {1,2,4,5};

    // for (int i = 0; i < n; i++)
    // {
    //     flag = 0;
    //     for (int j = 0; j < n; j++)
    //     {

    //         if (arr[j] == i)
    //         {
    //             flag = 1;
    //             break;
    //         }
    //     }

    //     if (flag == 0)
    //     {
    //         cout<<i<<endl;

    //         return 0;
    //     }
    // }

    // better

//     int n = 5;
//     int arr[n] = {1, 2, 3, 5};

//     int hash[n + 1] = {0};

//     for (int i = 0; i < n; i++)
//     {

//         hash[arr[i]] = 1;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//     if (hash[i]==  0)
//     {
//       cout<<i  <<endl;
// return 0;

//     }

    

// }
    


//optimal solution 

// int n=5;

// int arr[n]={1,2,4,5};

// int sum= n*(n+1)/2;
// int s1= 0;

// for (int i = 0; i < n; i++)
// {
//  s1+= arr[i]; 

// }


// int miss= sum-s1;
// cout<<miss<< endl;




}
