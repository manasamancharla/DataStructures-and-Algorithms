#include <bits/stdc++.h>
using namespace std;

// minimum or maximum to the back
// Time complexity O(n2) in worst case and average case.
// Time complexity O(n) if array already sorted.
// Space complexity O(n).
void recursiveBubbleSort(vector<int> &arr, int max)
{

  if (max == 0)
  {
    return;
  }

  bool didSwap = false;

  for (int i = 0; i < max; i++)
  {
    if (i + 1 < max && arr[i] > arr[i + 1])
    {
      swap(arr[i], arr[i + 1]);
      didSwap = true;
    }
  }

  if (didSwap == false)
  {
    return;
  }

  recursiveBubbleSort(arr, max - 1);
}

int main()
{

  vector<int> a = {2, 0, 2, 1, 1, 0};

  recursiveBubbleSort(a, a.size());

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}