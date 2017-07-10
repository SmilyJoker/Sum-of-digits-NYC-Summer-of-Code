#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number=0;

    cout << "Give me a number : ";
    cin >> number;
    cout << endl;

    int sum = 0;
    while(number!=0){
        sum += number % 10;
        number /= 10;
    }
    cout << "The digit sum is = " << sum << endl;

    return 0;
}
