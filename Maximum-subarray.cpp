/*
// Brute Force algorithm approach
#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}
*/

/*
// Maximum of subarray element brute force
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int maxSum = INT_MIN;
  for (int st = 0; st < n; st++)
  {
    int currSum = 0;
    for (int end = st; end < n; end++)
    {
      currSum += arr[end];
      maxSum = max(currSum, maxSum);
    }
  }
  cout << " Maximum Of sub array " << maxSum;
  return 0;
}
*/

// kadanze algorithm to find maximum of sub array
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int arr[5] = {1, -2, 3, -4, 5};
  int n = 5;

  int maxSum = INT_MIN; // Maximum subarray sum
  int currSum = 0;      // Current subarray sum

  for (int i = 0; i < n; i++) // Single loop
  {
    currSum += arr[i];             // Add current element to currSum
    maxSum = max(maxSum, currSum); // Update maxSum if currSum is greater

    if (currSum < 0) // If currSum becomes negative, reset it to 0
    {
      currSum = 0;
    }
  }

  cout << "Maximum of subarray: " << maxSum << endl;
  return 0;
}
