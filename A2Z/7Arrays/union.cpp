#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
n=5;
m=6;
int arr1[n]={ 1,2,3,45,6};
int arr2[m]={ 1,2,31,45,67,87};


// set<int>st;
// for (int  i = 0; i < n; i++)
// {
//    st.insert(arr1[i]);
// }
// for (int  j = 0; j < m; j++)
// {
//    st.insert(arr2[j]);
// }

//     cout << "Original Set elements\n";
//     for (int i : st)
//         cout << i << " ";
//     cout << endl;

// 



                          //optimal solution


vector<int> unionarr;
int i,j=0;
while (i<n&&j<m)
{
    if (arr1[i]<=arr2[j])
    {
        if (unionarr.size()==0||unionarr.back()!=arr1[i])
        {
           unionarr.push_back(arr1[i]);
        }
       i++; 
    }
    else
    {
    if (unionarr.size()==0||unionarr.back()!=arr2[j])
        {
           unionarr.push_back(arr2[j]);
        }
       j++;    
    }
    
}

while (j<m)
{

  if (unionarr.size()==0||unionarr.back()!=arr2[j])
        {
           unionarr.push_back(arr2[j]);
        }
       j++; 

}

while (i<n)
{
  if (unionarr.size()==0||unionarr.back()!=arr1[i])
        {
           unionarr.push_back(arr1[i]);
        }
       i++; 
}

for (int i = 0; i < unionarr.size(); i++)
{
    cout<<unionarr[i]<<endl;
}


}   