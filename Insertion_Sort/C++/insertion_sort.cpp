#include<iostream>
using namespace std;

int* insertion_sort(int* array,size_t n); // Function prototype

int main()
{
  size_t n = 7;
  int myArray[7] = {9,5,4,7,6,3,8};
  int* ptr_var = insertion_sort(myArray, n);

  for(size_t i=0; i<n; i++)
    cout << *(ptr_var++) << '\n';

  return 0;
}

int* insertion_sort(int *array,size_t n)
{
  int num = 1;
  int key;
  size_t i;
  int* return_ptr;
  for(size_t j=1; j<n; j++)
  {
    key = array[j];
    i=j-1;
    while(i>=0 && array[i]>key)
    {
      array[i+1] = array[i];
      i--;
    }
    array[i+1] = key;
  }
  return_ptr = &(array[0]);
  return return_ptr;
}
