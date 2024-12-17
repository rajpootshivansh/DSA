#include <bits/stdc++.h>
using namespace std;




int main(){

int m,n;
m=5;
n=6;

int arr1[m]={12,36,45,89,78};
int arr2[n]={12,36,45,25,48,89};
// int visit[n]={0};

vector<int>interarr;
// for (int  i = 0; i < m; i++)
// {
//    for (int  j = 0; j < n;j++)
//    {
//     if (arr1[i]==arr2[j]&&visit[j]==0)
//     {
//        interarr.push_back(arr1[i]);
//        visit[j]=1;
//        break;
//     }
//     if (arr2[j]>arr1[i])
//     {
//        break;
//     }
    
//    }
   

// for (int i = 0; i < interarr.size(); i++)
// {
//     cout<<interarr[i]<<" ";
// }


// }


int i,j=0;
while (i<m&&i<n)
{
    if (arr1[i]<arr2[j])
    {
        i++;
    }


   else if (arr2[j]<arr1[i])
   {
   j++;
   }
    



    else
    {
        interarr.push_back(arr1[i]);
        i++;
        j++;
    }
    
}
for (int i = 0; i < interarr.size(); i++)
{
    cout<<interarr[i]<<" ";
}

}