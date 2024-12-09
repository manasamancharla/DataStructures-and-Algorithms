#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int high, int mid)
{

  int b[high - low + 1];

  int left = low;
  int right = mid + 1;

  // Used array instead of vector
  int k = 0;

  while (left <= mid && right <= high)
  {

    if (a[left] < a[right])
    {
      b[k] = a[left];
      left++;
    }
    else
    {
      b[k] = a[right];
      right++;
    }
    k++;
  }

  while (left <= mid)

  {
    b[k] = a[left];
    k++;
    left++;
  }

  while (right <= high)
  {
    b[k] = a[right];
    k++;
    right++;
  }

  for (int i = 0; i < high - low + 1; i++)
  {
    a[low + i] = b[i];
  }
}

// Divide and conquer and build back the array in sorted array.
// Time complexity O(nlogn).
// Space complexity 0(n).
void mergeSort(int a[], int low, int high)
{

  if (low >= high)
  {
    return;
  }

  int mid = (low + high) / 2;

  mergeSort(a, low, mid);
  mergeSort(a, mid + 1, high);
  merge(a, low, high, mid);
}

int main()
{

  int a[] = {52, 46, 24, 13, 20, 9};

  int size = sizeof(a) / sizeof(a[0]);

  mergeSort(a, 0, size - 1);

  for (int it : a)
  {
    cout << it << " ";
  }

  cout << endl;
  return 0;
}