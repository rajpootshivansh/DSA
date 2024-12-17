#include <bits/stdc++.h>
using namespace std;

int main()
{

//         int n = 7;

//         int arr[n] = {2, 2, 3, 3, 1, 2, 2};

//         std::set<int> stt;

//         for (int i = 0; i < n; i++)
//         {
//             int counter = 0;

//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[j] == arr[i])
//                 {
//                     counter = counter + 1;
//                 }
//             }

//             if (counter > n / 2)
//             {
//                 cout << arr[i];
//                 break;
//             }
        
    

//     cout<<counter<<endl;
//     stt.insert(counter);

//     counter=0;



//     cout << *max_element(stt.begin(), stt.end()) << endl;
//         }
// }

    // better

//     int n=9;

//     int arr[n]= {2,2,1,3,1,1,3,1,1};

//     map <int,int> mpp;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }

//     for (auto it: mpp)
//     {
//     if (it.second> (n/2)){

//         cout<<it.first;
//     }

//     }
// }
    // return -1;

    // optimal

    // moore votting algorithm

    int n = 9;

    int v[n] = {2, 2, 1, 3, 1, 1, 3, 1, 1};

    int cnt = 0;

    int ele;

    for (int i = 0; i < n; i++)
    {

        if (cnt == 0)
        {
            cnt = 1;
            ele = v[i];
        }

        else if (v[i] == ele)

        {
            cnt++;
        }

        else
        {

            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == ele)
            cnt1++;
    }

    if (cnt1 > (n / 2))
    {
        cout << ele;
    }
}


