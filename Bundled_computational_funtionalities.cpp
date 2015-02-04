#include <iostream>

/* By Malcolm Maima */

/* Bundled Computational functionalities in the below peice of code

*  1. Store "N" number of values in an array
*  2. Compute Sum, Average, Largest value, Smallest Value
*  3. Display original array - Unsorted
*  4. Sort Original Array to Sorted Array
*  5. Search Array List
 */

using namespace std;

//Function to compute the sum of the numbers entered
int sumArray (int values[], int size) {
    int sum = 0;
    for ( int i = 0; i < size; i++ )  {
            sum += values[ i ];
    }
        return sum;
    }

//Function to compute the average of the numbers entered
int averageArray (int values[], int size){
    int average = 0;
    for (int i = 0; i < size; i++) {
        average += values[i]/size;
    }
    return average;
}

//Function to compute the highest of the entered numbers
int largestArray (int values[], int size){
    int highest = 0;
    for (int i = 0; i < size; i++) {
            if(values[i] > highest){
                highest = values[i];
            }
    }
    return highest;
}

int SmallestArray (int values[], int size){
    int smallest = values[1];
    for (int i = 0; i < size; i++) {
            if(values[i] < smallest){
                smallest = values[i];
            }
    }
    return smallest;
}


int findSmallestRemainingElement (int array[], int size, int index);

    void swap (int array[], int first_index, int second_index);
    void sort (int array[], int size) {

    for ( int i = 0; i < size; i++ )
        {   int index = findSmallestRemainingElement( array, size, i );
    swap( array, i, index );
    }
}
//Function to compute smallest element in an array
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
    // small helper method to display the before and after arrays
    void displayArray (int array[], int size) {
        cout << "{ ";  for ( int i = 0; i < size; i++ )
        {   // lists--check if we're past the first element, and
            // if so, append a comma
            if ( i != 0 )   {
                cout << ", ";
            }
                cout << array[ i ];  }  cout << " }";
}
// Function to search element in array
int List_search(int numbers[], int target){
    int value = 0;
    for ( int i = 0; i < 6; i++ )  {
            if(numbers[i] == target){
                value = numbers[i];
            }
            else if(i == numbers[i]){
                return 0;
            }
    }
        return value;
}

int main(){
    int numbers;
    cout << "How many numbers do you want to enter: " << endl;
    cin >> numbers;
    cout << "Okay Start \n" << endl;

    int i = 0;
    int sum[numbers];
    while (i < numbers){
            cout << "Enter number: " << endl;
            cin >> sum[i];
            i = i + 1; // We loop here until while loop is false then we exit loop
    }
    cout << "\t *******************************" << endl;
    cout << "\t *\t ELEMENTS => " << i << endl;
    cout << "\t *\t -----------------" << endl;
    cout << "\t *\t SUM => " << sumArray( sum, numbers ) << endl;
    cout << "\t *\t -----------------" << endl;
    cout << "\t *\t AVERAGE => " << averageArray(sum, numbers) << endl;
    cout << "\t *\t -----------------" << endl;
    cout << "\t *\t LARGEST => " << largestArray(sum, numbers)<< endl;
    cout << "\t *\t -----------------" << endl;
    cout << "\t *\t SMALLEST => " << SmallestArray(sum, numbers)<< endl;
    cout << "\t *\t -----------------" << endl;
    cout << "\t *\t ORIGINAL ARRAY: ";
    displayArray( sum, numbers );
    cout << '\n';
    cout << "\t *\t -----------------" << endl;
    sort( sum, numbers );
    cout << "\t *\t SORTED ARRAY: ";  displayArray( sum, numbers );  cout << '\n';
    cout << "\t *\t -----------------" << endl;
    cout << "\t *******************************" << endl;

    string response;
    cout << "Do you want search array(y/n): " << endl;
    cin >> response;
    if(response == "y"){
        //Run search here
    int input_code;
    cout << "\t *\t ---------------------------------------------" << endl;
    cout << "\t *\t * NOTE: If Result = 0 then product not found *"<< endl;
    cout << "\t *\t   -------------------------------------------" << endl;
    cout << "\t *\t SEARCH ARRAY: ";
    cin >> input_code;
    cout << "\t *\t   ----------------------------------------------\n" << endl;
    cout << "\t *\t Result " << List_search(sum, input_code) << " Found." << endl;
    cout << "\t *\t ------------------------------------------------" << endl;
    }
    else if(response == "n"){
        cout << "Bye!" << endl;
        return 0;
    }
    else{
        //Error!
        cout << "Invalid input!" << endl;
        return 0;
    }


    }



