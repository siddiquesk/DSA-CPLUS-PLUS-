// 1) Pair sum Element find brute force approach
/*
#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> nums, int target)
{
  int n = nums.size();
  bool found = false; // To track if we find any pair

  for (int i = 0; i < n; i++) // First element of the pair
  {
    for (int j = i + 1; j < n; j++) // Second element of the pair
    {
      if (nums[i] + nums[j] == target) // If the sum is equal to target
      {
        cout << "Pair found at indices: " << i << " and " << j << endl; // Print the indices
        found = true;
      }
    }
  }

  if (!found) // If no pair is found
  {
    cout << "No pair found!" << endl;
  }
}

int main()
{
  vector<int> nums = {2, 7, 12, 6, 8, 1, 15}; // Input array
  int target = 9;                             // Target sum

  pairSum(nums, target); // Call function to find the pair sum

  return 0;
}

*/

/*
//2) Pair sum Element find brute force approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> Pairsum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();
  int i = 0, j = n - 1;
  while (i < j)
  {
    int pairsum = nums[i] + nums[j];
    if (pairsum > target)
    {
      j--;
    }
    else if (pairsum < target)
    {
      i++;
    }
    else
    {
      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
  }
}

int main()
{

  vector<int> nums = {2, 4, 6, 7, 11, 15};
  int target = 13;
  vector<int> ans = Pairsum(nums, target);
  cout << ans[0] << " " << ans[1] << endl;

  return 0;
}

*/
/*
//3) Find Majority Element by Brute forec approach
#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int> nums)
{
  int n = nums.size();
  for (int val : nums)
  {
    int freq = 0;
    for (int el : nums)
    {
      if (el == val)
      {
        freq++;
      }
    }
    if (freq > n / 2)
    {
      return val;
    }
  }
  return -1;
}
int main()
{
  vector<int> nums = {3, 3, 1, 3, 4, 3};

  int result = MajorityElement(nums);
  cout << "Majority Element Is " << result;
  return 0;
}
*/

/*

// 4)Find Majority Element sorting approach Time
#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;
int MajorityElement(vector<int> &nums)
{
  int freq = 1, ans = nums[0];
  int n = nums.size();
  for (int i = 1; i < n; i++)
  {
    if (nums[i] == nums[i - 1])
    {
      freq++;
    }
    else
    {
      freq = 1;
    }
    if (freq > n / 2)
    {
      return nums[i];
    }
  }
  return -1;
}

int main()
{
  vector<int> nums = {1, 1, 1, 2, 4, 1};
  // Sort the array
  sort(nums.begin(), nums.end());
  int result = MajorityElement(nums);
  if (result != -1)
  {
    cout << "Majority Element Is " << result << endl;
  }
  else
  {
    cout << "No Majority Element Found!" << endl;
  }
  return 0;
}
*/

// 5) Find Majority Element by Moore's Algorithm Time Complexti O(n);

#include <iostream>
#include <vector>
using namespace std;
int MajorityElement(vector<int> &nums)
{
  int freq = 0, ans = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if (freq == 0)
    {
      ans = nums[i];
    }
    if (ans == nums[i])
    {
      freq++;
    }
    else
    {
      freq--;
    }
  }
  // majority elemnt na diya gya ho ye condition lgasakte hai  warna nhi
  int count = 0;
  for (int val : nums)
  {
    if (val == ans)
    {
      count++;
    }
  }
  if (count > n / 2)
  {
    return ans;
  }
  else
  {
    return -1;
  }

  return ans;
}

int main()
{
  vector<int> nums = {4, 4, 1, 2, 4, 4};
  int result = MajorityElement(nums);
  cout << "Majority Element Is " << result << endl;

  return 0;
}
