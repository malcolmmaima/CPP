#include <iostream>
/* By Malcolm Maima */
using namespace std;

int List_search(int products[], int target){
    int value = 0;
    for ( int i = 0; i < 6; i++ )  {
            if(products[i] == target){
                value = products[i];
            }
            else if(i == products[i]){
                return 0;
            }
    }
        return value;
}

int main()
{
    int input_code;
    int product_list[] = {113, 413, 415, 516, 517, 614};
    cout << "---------------------------------------------" << endl;
    cout << "| NOTE: If Result = 0 then product not found |\n"<< endl;
    cout << "---------------------------------------------\n" << endl;
    cout << "Search Product code: " << endl;
    cin >> input_code;
    cout << "-------------------------------------------------\n" << endl;
    cout << "Result: " << List_search(product_list, input_code) << " Found." << endl;
    cout << "-------------------------------------------------" << endl;
}
