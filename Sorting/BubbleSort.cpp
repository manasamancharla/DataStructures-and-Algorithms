#include <bits/stdc++.h>
using namespace std;

// minimum or maximum to the back
// Time complexity O(n2) in worst case and average case.
// Time complexity O(n) if array already sorted.
void bubbleSort(vector<int> &arr)
{

  int size = arr.size();

  for (int j = 0; j < size - 1; j++)
  {
    bool didSwap = false;

    for (int i = 0; i < size - 1 - j; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
        didSwap = true;
      }
    }

    if (didSwap == false)
    {
      break;
    }
  }
}

int main()
{

  vector<int> a = {52, 46, 24, 13, 20, 9};

  bubbleSort(a);

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}