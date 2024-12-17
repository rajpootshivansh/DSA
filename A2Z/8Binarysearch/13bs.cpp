#include <bits/stdc++.h>
using namespace std;

int possible(int arr[], int n, int day, int b, int x)
{




    int count = 0;
    int nooffb = 0;




    for (int i = 0; i < mid ; i++)
    {

        if (arr[i] <= day)
        {
            count++;
        }

        else
        {
            nooffb = count / x;
            count = 0;
        }

        nooffb += count / x;
    }

   return nooffb>=b;


}



int rosegarden(int arr[,])


