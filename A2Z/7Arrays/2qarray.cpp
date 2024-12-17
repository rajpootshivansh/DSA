#include <iostream>
using namespace std;

// void reverse(int arr[], int start, int end)
// {

//     while (start <= end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

int main()
{

    // int n;
    // cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int n=7;
    // int arr[n]={1,2,3,4,5,6,7};
    // //By Replacing One Place

    //     int temp = arr[0];

    //     for (int i = 0; i < n; i++)
    //     {

    //         arr[i - 1] = arr[i];
    //     }

    // arr[n-1]=temp;

    //    for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";}}
           // int n=5;
    // int arr[n]={14,25,45,36,477};
  
    // By Rotating Dth Places

    int d;
    cin>>d;
     int temp[d];

     for (int  i = 0; i < d; i++)
     {
    temp[i]= arr[i];
     }

     for (int i = 0; i < n; i++)
     {
       arr[i-d]=arr[i];
     }
    for (int  i = n-d; i < n; i++)
    {
    arr[i]= temp[ i-(n-d)];
    }

    for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }



    // optimal method

    // reverse (arr,arr+d);
    // reverse (arr+d,arr+n);
    // reverse (arr,arr+n);

    // for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }

    // Moves zero to end
//   int n=9;
//     int arr[n] = {1, 2, 3, 0, 4, 0, 7, 0, 8};

//     int temp[];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }

//     // step  2

//     int nz = temp.size();

//     for (int i = 0; i < nz; i++)
//     {
//         arr[i] = temp[i];
//     }

//     // step  3;

//     for (int i = nz; i < n; i++)
//     {
//         arr[i] = 0;
//     }


// int n=9;

// int arr[n]= {  23,45,67,12,65,34,87,57,90}
// int num = 67;




// for (int i = 0; i < n; i++)
// {
//   if (arr[i]== num)
//   {
//    break;
  }



