#include <iostream>
using namespace std;

// min & max element between the array 
int main()
{
    int name[] = {90, 88, 89, 78, 8};
    int ans = 90;

    // min value 
    for (int i = 0; i < 5; i++)
    {
        if (name[i] < ans)
        {
            ans = name[i];
        }
    }
    cout << "Minimum is : " << ans << endl;

    // max value 
    for (int i = 0; i < 5; i++)
    {
        if (name[i] >ans)
        {
            ans = name[i];
        }
    }
    cout << "Maximum is : " << ans << endl;

}
