// Leetcode problem 11 container with most water
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time complexity is o(n2)
int maxArea(vector<int> &height)
{
  int maxwater = 0;
  for (int i = 0; i < height.size(); i++)
  {
    for (int j = i + 1; j < height.size(); j++)
    {
      int w = j - i;
      int ht = min(height[i], height[j]);
      int currWater = w * ht;
      maxwater = max(maxwater, currWater);
    }
  }
  return maxwater;
}

int main()
{

  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int result = maxArea(height);
  cout << "Maximum Water contain " << result;
  return 0;
}
*/

// Find maximum water by two pointer approach Time Complexity O(n)//linear

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxArea(vector<int> &height)
{
  int maxWater = 0;
  int lp = 0, rp = height.size() - 1;
  while (lp < rp)
  {
    int w = rp - lp;
    int ht = min(height[lp], height[rp]);
    int currwater = w * ht;
    maxWater = max(maxWater, currwater);
    height[lp] < height[rp] ? lp++ : rp--;
  }
  return maxWater;
}

int main()
{

  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 9};
  int result = maxArea(height);
  cout << "Maximum Water contain " << result;
  return 0;
}