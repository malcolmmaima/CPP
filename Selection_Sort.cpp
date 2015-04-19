#include <iostream>
/*
*   Selection Sort Algorithm
*   By Malcolm Maima < www.malcolmmaima.com />
*   Overall algorithm complexity is O(n2)
*   check out comments for explanation
*   Reference < http://en.wikipedia.org/wiki/Selection_sort >
*/
using namespace std;

void displayArray (int array[], int size) { //Format and display our Array nicely :D
        cout << "{ ";
        for ( int i = 0; i < size; i++ )
        {   // lists--check if we're past the first element, and
            // if so, append a comma
            if ( i != 0 )   {
                cout << ", ";
            }
            cout << array[ i ];
            }
            cout << " }";
}



void SelectionSort(int array[], int size) {

    cout << "Original Array "; displayArray(array, size); cout << "\n \n";
    int smallest_idx;
    int tmp;

      for (int i = 0; i < size - 1; i++) { //We need to traverse through all the elements in the array

            smallest_idx = i;   //Selection Sort compares the 0th element to all the elements in the array
                                //So we need to set the smallest index to our 0th element position

            for (int j = i + 1; j < size; j++)  //A second loop to traverse through the array elements excluding the 0th element

                  if (array[j] < array[smallest_idx])   //If element on our furthest left which is our 0th element is greater than an
                                                        //array element in the list, then set new 0th element to that element in the list

                        smallest_idx = j;

            if (smallest_idx != i) {    //if our 0th element is not equal to our iteration level then swap 0th element with iteration level, position i in this case

                  tmp = array[i];

                  array[i] = array[smallest_idx];

                  array[smallest_idx] = tmp;

            }

            int iteration_level = i+1;
            cout <<"Iteration Level (" << iteration_level << ") --> "; displayArray(array, size); cout << "\n \n"; // Output each iteration level resulting array
      }

}


int main()
{
    int integer;
    cout << "How many elements would you like to enter: " << endl;
    cin >> integer;

    int integers[integer];

    for(int i = 0; i<integer; i++)
    {
        cout << "Enter integer: \n";
        cin >> integers[i];
    }
    SelectionSort(integers, integer);
}
