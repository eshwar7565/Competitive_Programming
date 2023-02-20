// Counting sort in C++ programming

#include <iostream>
using namespace std;

void countSort(int array[], int size) {

  int output[1000];//Declare sufficient size as we dont know the max value presently
  int count[1000];
  int max = array[0];

  // Finding the largest element of the array
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
    cout<<"sorted array :";
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
  countSort(array, n);
  printArray(array, n);
}