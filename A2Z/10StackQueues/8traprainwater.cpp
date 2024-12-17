#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
// vector <int> prefixmax(int prefix[],int n){

//     prefix[0]=arr[0];
// for (int  i = 1; i < n-1; i++)
// {
//    prefixmax[i]= max(prefix[i-1],arr[i]);
// }

// return prefix;

// }

// vector <int> suffixmax(int suffix[],int n){

//     suffix[n-1]=arr[n-1];
// for (int  i = 1; i < n-1; i++)
// {
//    suffixmax[i]= max(suffix[i+1],arr[i]);
// }

// return suffix;

// }

// int trap(int array[],int n ){
//     int total=0;

//     for (int  i = 0; i < n; i++)
//     {

// int leftmax=prefixmax[i];
// int rightmax=suffixmax[i];

// if(array[i]<leftmax&&array[i]<rightmax){

//     total+=min(leftmax,rightmax)-arr[i];

// }

//     }

int totaltrap(int arr[], int n)
{

    int leftmax, rightmax, total, l = 0;
    int r = n - 1;

    while (l < r)
    {

        if (arr[l] <= arr[r])
        {
            if (leftmax > arr[l])
            {

                total += leftmax - rightmax;
            }

            else
                leftmax = arr[l];

            l = l + 1;
        }

        else
        {

            if (rightmax > arr[r])
            {

                total += rightmax - leftmax;
            }
            else
            {
                rightmax = arr[r];
                r = r - 1;
            }
        }
    }

    return total;
}

int main()
{
    int array[12] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = 12;

    cout << totaltrap(array, n);

    // cout << endl;

    return 0;
}