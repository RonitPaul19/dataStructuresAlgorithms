//rotate the arrays to left and right by d places
#include <iostream>
using namespace std;
void RotateRight(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;
    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - n + k] = arr[i];
    }
    for (int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}
void RotateLeft(int arr[], int n, int d)
{
    if (n == 0)
        return;
    d = d % n;
    if (d == 0)
        return;
    int temp[d];
    // Copy first d elements to temp
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // Shift the rest of the elements to the left
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // Copy temp elements to the end
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

///// OPTIMAL SOLUTION ////

void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void Rotateeletoright(int arr[], int n, int k)
{
  // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}


void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;

    cout<<"Original array : \n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    RotateLeft(arr, n, d);
    cout << "\n\n\nAfter Rotating the elements to left by "<<d<<" places : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    Rotateeletoright(arr, n, d);
    cout << "\n\n\nAfter Rotating the elements to right by "<<d<<" places : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
