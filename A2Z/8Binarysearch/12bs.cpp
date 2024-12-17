#include <bits/stdc++.h>
using namespace std;



int findmaxt(int arr[],int n){
int maxi=INT_MIN;
for (int  i = 0; i < n; i++)
{

     maxi= max(maxi,arr[i]);
}

return maxi;

}



int totalhour(int piles[], int n, int speed)
{

    int totalhours = 0;

    for (int i = 0; i < n; i++)
    {
        totalhours += ceil((double)piles[i] /(double) speed);
    }

    return totalhours;
}

int kokoeating(int piles[], int n, int hours)
{

    int low = 1;
    int high = findmaxt(piles,n);
    int result = high;
    while (low <= high)
    {

        int mid = (low + high) / 2;

        int req = totalhour(piles, n, mid);

        if (req < hours)
        {
            result = mid;

            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    int piles[] = {3, 6, 2,8};
    int n = sizeof(piles) / sizeof(piles[0]);

    int k = kokoeating(piles, n, 7);

    cout << k;
}