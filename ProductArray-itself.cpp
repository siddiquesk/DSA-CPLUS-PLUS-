
/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> ProductArray(vector<int> &nums)
{
  int n = nums.size();
  vector<int> result(n, 1);

  // Step 1: Calculate left products
  int leftProduct = 1;
  for (int i = 0; i < n; i++)
  {
    result[i] = leftProduct;
    leftProduct *= nums[i];
  }

  // Step 2: Calculate right products and multiply with left products
  int rightProduct = 1;
  for (int i = n - 1; i >= 0; i--)
  {
    result[i] *= rightProduct;
    rightProduct *= nums[i];
  }

  return result;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> result = ProductArray(nums);

  cout << "Product of Array Except Self: ";
  for (int val : result)
  {
    cout << val << " ";
  }

  return 0;
}

*/



///Time complexity big O(n) Linear time complexity

#include <iostream>
#include <vector>
using namespace std;
vector<int> ProductArray(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n, 1);
  vector<int> prefix(n, 1);
  vector<int> suffix(n, 1);

  for (int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] * nums[i - 1];
  }
  for (int i = n - 2; i >= 0; i--)
  {
    suffix[i] = suffix[i + 1] * nums[i + 1];
  }
  for (int i = 0; i < n; i++)
  {
    ans[i] = prefix[i] * suffix[i];
  }
  return ans;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 6};
  vector<int> result = ProductArray(nums);

  cout << "Product of Array Except Self: ";
  for (int val : result)
  {
    cout << val << " ";
  }

  return 0;
}