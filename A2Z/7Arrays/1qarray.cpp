#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 5;

    int arr[n] = {12, 12, 25, 45, 36};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element is      " << largest << endl;

    int smallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "smallest element is      " << smallest << endl;

    int slargest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    cout << "sLargest element is" << slargest << endl;
    int ssmallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ssmallest && arr[i] != smallest)
        {
            ssmallest = arr[i];
        }
    }
    cout << "ssmallest element is      " << ssmallest << endl;

    // is sorted or not

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            cout << "yes";
        }

        cout << true << endl;
    }
    ////////remove duplicates
             int i = 0;


    for (int j = 0; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    cout << "uniqueelements are " << i + 1;
}

// }