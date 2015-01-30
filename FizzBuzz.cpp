#include <iostream>
// made by @malcolm maima for hacker school
using namespace std;

int main()
{
    for(int i = 0; i <= 100; i++){

        if(i%15 == 0){
                //If int i divided by 15 which is a product of 3 and 5 gives a remainder of 0 then it is divisible by both 3 and 5
                cout << i <<" CracklePop"<<endl;

        }
        else if(i%3 == 0){
                //if dividing int i by  3 gives no remainder then it is divisble by 3
            cout << i << " Crackle"<<endl;
        }
        else if(i%5 == 0){
            //if dividing int i by  5 gives no remainder then it is divisble by 5
            cout << i <<" Pop"<<endl;
        }
        else {
            //otherwise if it does not meet any of the conditional statements above then just output the number
            cout << i << endl;
        }

    }
}
