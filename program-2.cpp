#include<iostream>
using namespace std;

int main()
{
    int num_1;

    cout << "Enter A Number :- ";
    cin >> num_1;

    int& ref_1 = num_1;

    cout << "The Inputed Number Is :- "<< ref_1 <<"." << endl;
    
    ref_1 = 50;
    
    cout << "The Updated Number Is :- "<< ref_1 <<"." << endl;

    return 0;
}