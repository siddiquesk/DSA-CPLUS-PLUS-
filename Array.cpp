
/*
#include <iostream>
#include <climits>
using namespace std;

int main()
{

  int nums[10] = {1, 2, 4, 88, 102, 202, 29, 27, 90, 55};
  int size = 10;
  int largest = INT_MIN;
  int smallest = INT_MAX;
  int index;
  for (int i = 0; i < size; i++)
  {
    if (nums[i] > largest)
    {
      largest = nums[i];
      index = i;
    }
    if (nums[i] < smallest)
    {
      smallest = nums[i];
    }
  }
  cout << "Largest Number is " << largest;
  cout << endl;
  cout << "index is " << index;
  cout << endl;
  cout << "smallest is " << smallest;

  return 0;
}
 */

// Linear search program to search
/*
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[8] = {10, 22, 726, 17, 9, 2, 45, 84};
  int search;
  cout << "Enter the number you want to serach ";
  cin >> search;
  for (int i = 0; i < 8; i++)
  {
    if (arr[i] == search)
    {
      cout << "The number is present in array " << search;
    }
    else
    {
      cout << "The number is not found in array";
      break;
    }
  }

  return 0;
}
*/

// Linear search program to with the help of function
/*   Time complexity  o(n)
#include <iostream>
#include <climits>
using namespace std;

int LinearSearch(int arr[], int search, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == search)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int search, size = 7;
  int arr[7] = {22, 45, 76, 98, 12, 1, 20};
  cout << "Enter the number You want to search ";
  cin >> search;

  int res = LinearSearch(arr, search, size);
  cout << "The number is found at Position " << res;
  return 0;
}
*/

// reverse an array by two pointer Approach
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {2, 3, 9, 7, 12, 19, 70, 22};
    int size = 8;
    int start = 0;
    int end = size - 1;

    // Two-pointer approach to reverse the array
    while (start < end)
    {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers
        start++;
        end--;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/
// Function to reverse the array
#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size){
  int start = 0;
  int end = size - 1;
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main()
{
  int arr[9] = {2, 3, 55, 4, 9, 45, 76, 21, 43};
  int size = 9;
  ReverseArray(arr, size);
  cout << "Reversed array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
