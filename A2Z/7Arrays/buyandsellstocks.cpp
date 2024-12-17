// #include <bits/stdc++.h>
// using namespace std;
// int buyandsellstocks(int arr[], int n)
// {

//    //    int buy= min_element( arr);

//    // int sell = max_element(arr);

//    // return buy;
//    // return sell;/

//    for (int i = 0; i < n; i++)

//    {
//       std::set<int> stt;

//       for (int j = 0; j < n; j++)
//       {
//          stt.insert(arr[i] - arr[j]);
//       }
//    }
//    int k = *max_element(stt.begin(), stt.end()) ;
//    return k;
// }
#include <bits/stdc++.h>
   using namespace std;

   int buyandsellstocks(int arr[], int n)
   {
      int min_price = INT_MAX; // Initialize to a very large value
      int max_profit = 0;      // Initialize profit to 0

      for (int i = 0; i < n; i++)
      {
         // Update the minimum price if a lower value is found
         min_price = min(min_price, arr[i]);

         // Calculate the current profit
         int current_profit = arr[i] - min_price;

         // Update the maximum profit if the current profit is higher
         max_profit = max(max_profit, current_profit);
      }

      return max_profit;
   }

   int main()
   {
      int arr[] = {7, 1, 5, 3, 6, 4};
      int n = sizeof(arr) / sizeof(arr[0]);

      int ans = buyandsellstocks(arr, n);

      cout << ans; // Output the maximum profit
            }

  