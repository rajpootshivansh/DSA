#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // Size of the array
    int arr[n] = {1, 2, 3, 5}; // Array with a missing number

    // Hash array to mark the presence of numbers
    int hash[n + 1] = {0}; // Hash array size should be n+1 to include all numbers from 1 to n

    // Mark the presence of numbers in the hash array
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1; // Use = to set the value to 1
    }

    // Find and print the missing number
    for (int i = 1; i <= n; i++) // Iterate from 1 to n (inclusive)
    {
        if (hash[i] == 0) // If the number is missing
        {
            cout << i << endl; // Print the missing number
            return 0; // Exit after finding the missing number
        }
    }

    // If no number is missing (this shouldn't happen with correct input)
    cout << "No missing number found" << endl;
    return 0;
}
