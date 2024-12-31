#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {5, 15, 95, 4, 85, 3, 65, 4, 4};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for ( i = 0; i < n; i++)
    {
       if(arr[i]>largest)
       {
        largest=arr[i];
       }
    }
    cout << "the largest number from arr is: " << largest << endl;
    return 0;
}