#include <iostream>

/*
*   DATA STRUCTURES AND ALGORITHMS
*   ------------------------------
*   By Malcolm Maima < www.malcolmmaima.com >
*   Implementation of Binary and Linear Search
*   *** Works like a Charm ***
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

int findSmallestRemainingElement (int array[], int size, int index);

    void swap (int array[], int first_index, int second_index);

    void sort (int array[], int size) {

    for ( int i = 0; i < size; i++ )
        {
            int index = findSmallestRemainingElement( array, size, i );
            swap( array, i, index );
    }
}
//Function to compute smallest remaining element in an array
int findSmallestRemainingElement (int array[], int size, int index) {
    int index_of_smallest_value = index;
    for (int i = index + 1; i < size; i++)  {
            if ( array[ i ] < array[ index_of_smallest_value ]  )   {
                index_of_smallest_value = i;
    }
    }
    return index_of_smallest_value;
    }
//Lets do some swapping
void swap (int array[], int first_index, int second_index) {
    int temp = array[ first_index ];
    array[ first_index ] = array[ second_index ];
    array[ second_index ] = temp;
    }



void BinarySearch(int array[], int size, int target, int FirstIdex, int LastIndex)
{


    cout << "\t *\t OUR SORTED ARRAY: "; displayArray( array, size ); cout << "\n";
    cout << "\t *\t -----------------" << endl;


    int mid = FirstIdex + LastIndex / 2;

        while(FirstIdex < LastIndex)
        {
            if(array[mid] < target)
            {
                FirstIdex = mid + 1;
                cout << "\t *\t Element " << target << " not Found.\n" << endl;
                break;
            }

            else if(array[mid] == target)
            {
                    cout << "\t *\t Target Element " << target << " found at Location " << mid+1 << endl;
                    break;
            }
            else
            {
                LastIndex = mid - 1;
                mid = FirstIdex + LastIndex / 2;
            }
            if(FirstIdex > LastIndex)
            {
                cout << target << " is not present in the list.\n" << endl;
            }
        }
}

void LinearSearch(int array[], int size, int target)
{
    for (int i = 0; i < size; i++ )
        {
            if(array[i] == target)
            {
                cout << "Target Element "<<target << " found at position " << i+1 << endl;
            }

            else if(i == size-1)
            {
                cout << "----------------------------------------" <<endl;
                cout << "Target Element "<< target << "not found" << endl;
                cout << "----------------------------------------" <<endl;
            }
        }
}

int main(){
    int numbers;
    cout << "----------------------------------------" <<endl;
    cout << "How many element do you want to enter: " << endl;
    cout << "----------------------------------------" <<endl;
    cin >> numbers;
    cout << "Okay Start \n" << endl;
    cout << "----------------------------------------" <<endl;
    int i = 0;
    int sum[numbers];
    while (i < numbers){
            cout << "Enter integer_("<< i+1 << "): "<< endl;
            cin >> sum[i];
            cout << "--------------------------" <<endl;
            i = i + 1; // We loop here until while loop is false then we exit loop
    }
    int input;
    cout << "\t 1. Binary Search" << endl;
    cout << "\t 2. Linear Search" << endl;
    cout << "-------------------------" <<endl;
    cout << "Okay choose: " << endl;
    cin >> input;
    if(input == 1)
    {
        //Do binary
        //Pass the same array to the sort function then display new sorted array
        sort( sum, numbers ); //Sort our array since its binary search
        cout << "--------------------" << endl;

        int target;
        int index_1 = 0;
        int lastIndex = numbers - 1;
        cout << "Enter target element: " << endl;
        cin >> target;
        BinarySearch(sum, numbers, target, index_1, lastIndex);
    }
    else if(input == 2)
    {
        int target;
        cout << "Enter target element: " << endl;
        cout << "-----------------------" <<endl;
        cin >> target;
        LinearSearch(sum, numbers, target);

            }
    else
        {
            cout << "----------------------------" <<endl;
            cout << "Invalid response bro! Retrying...\n";
            cout << "----------------------------" <<endl;
            main(); //Lets try that one more time (Recursive)
        }


    }
