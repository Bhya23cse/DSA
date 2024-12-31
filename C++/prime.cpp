#include <iostream>
using namespace std;
int isPrime(int num)
{
    for (int i = 2; i <num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        
    }
    return true;

}
int main()
{
    int s;
    cout << "Enter a numeber until you want to print prime number:  ";
    cin >> s;

    for (int i = 2; i < s; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}