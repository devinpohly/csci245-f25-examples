/*
  Linear search: Find the location, if any, of a given value in a given array.
  x - the value for which to search
  array - the array in which to search for x
  n - the length of the given array
  returns: The index of the first occurrence of the value x, if it exists in 
           the array, or -1 if it does not exist in the array.
*/
int linear_search(int x, int array[], int n)
{
  int i = 0;  

  // no value prior to index i is equal to x
  while (i != n && array[i] != x)
    i++;
  // no value prior to index i is equal to x
  // + either i == n or array[i] = x

  // i is EITHER the index of the first occurrence of x OR the length of the
  // array if x does not occur in array

  if (i == n)
    return -1;
  else
    return i;
}

/*
  Selection sort: Permute the array so that its elements are arranged
  from least to greatest (preserving the actual elements).
  array - the array to sort
  n - the length of the array
  postcondition: The elements in the given array are sorted from least to 
  greatest.
*/
void selectionSort(int array[], int n) 
{
  int i;  // the boundary between the sorted and unsorted sections
  for (i = 0; i != n; i++) 
    {
      // Find the minimum
      int min = array[i];
      int minPos = i;
      int j;
      for (j = i + 1; j < n; j++) 
        {
          if (min > array[j]) 
            {
              min = array[j];
              minPos = j;
            }
        }

      array[minPos] = array[i];
      array[i] = min;
    }
  // The first n elements of the array are the smallest n elements in sorted
  // order
  // and i == n
  // ->
  // The array is sorted!
}
/*
  Insertion sort: Permute the array so that its elements are arranged
  from least to greatest (preserving the actual elements).
  array - the array to sort
  n - the length of the array
  postcondition: The elements in the given array are sorted from least to 
  greatest.
*/
void insertionSort(int array[], int n) 
{
  int i;     // The boundary between the sorted and unsorted sections
  // invariant: The range [0, i) is sorted
  for (i = 1; i < n; i++) 
    {
      int j;   // The current position of the item we are inserting into
               // the sorted section
      // invariant: 
      //   - The range [0, j) is sorted
      //   - The range [j, i) is sorted
      for (j = i; /* ?? */  ; /* ?? */ ) 
        {
            // ??
          compars++;
        }
   }
  return compars;
}
