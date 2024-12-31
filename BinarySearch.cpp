// binary search how to work as dictionary
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
  int st = 0, end = arr.size() - 1;
  while (st <= end)
  {
    int mid = st + (end - st) / 2; // coding platform pe ayse hi mid niklega jo ka same hai st+end/2 se
    if (target > arr[mid])
    {
      st = mid + 1; // second half
    }
    else if (target < arr[mid])
    {
      end = mid - 1; // First half
    }
    else
    {
      cout << "Number " << arr[mid] << " is found at index " << mid << endl;
      return arr[mid];
    }
  }
  cout << "Number " << target << " is not found in the array." << endl;
  return -1;
}

int main()
{
  vector<int> arr1 = {-1, 0, 3, 4, 5, 6, 9, 12};
  int target = 6;
  binarySearch(arr1, target);

  return 0;
}
