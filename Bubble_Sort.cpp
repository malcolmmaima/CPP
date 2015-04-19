#include <iostream>
/*
*   By Malcolm Maima
*   < www.malcolmmaima.com />
*   Simple Implementation of Bubble Sort Algorithm
*
*
*  algorithm BubbleSort(list) )
*  Pre: list =∅ )
*  Post: list //has been sorted into values of ascending order
*  for i←0 to list.Count−1 )
*   for j ←0 to list.Count−1 )
*         if list[i] < list[j] )
*          Swap(list[i],list[j])
*           end if
*     end for
*   end for
*return list
*end BubbleSort
*
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


void BubbleSort(int list[], int size)
{
    bool swapped = true;
    int j = 0;
    int tmp;

      while (swapped) {

            swapped = false;
            j++;

            for (int i = 0; i < size - j; i++) {

                  if (list[i] > list[i + 1]) {
                        tmp = list[i];
                        list[i] = list[i + 1];
                        list[i + 1] = tmp;
                        swapped = true;
                         cout << "Iteration (" << j << ") : \n \n"; displayArray(list, size); cout << "\n";
                         for(int j=0; j<size; j++)
                         {
                             cout << "----";
                         }
                         cout << "\n";
                  }
            }
      }
}


int main()
{
    int numbers;
    cout << "----------------------------------------" <<endl;
    cout << "How many element do you want to enter: " << endl;
    cout << "----------------------------------------" <<endl;
    cin >> numbers;
    cout << "Okay Start creating random list\n" << endl;
    cout << "----------------------------------------" <<endl;
    int i = 0;
    int list[numbers];
    while (i < numbers){
            cout << "Enter integer_("<< i+1 << "): "<< endl;
            cin >> list[i];
            cout << "--------------------------" <<endl;
            i = i + 1; // We loop here until while loop is false then we exit loop
    }
    BubbleSort(list, numbers); //Bubble sort will take in the random list, start and end positions
    string input;
    cout << "Run Again (y|n)... " << endl;
    cin >> input;
    if(input == "y")
    {
        main(); //Recursive
    }
    else
    {
        cout << "Bye!";
        return 0;
    }

}
