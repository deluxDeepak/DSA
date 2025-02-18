#include <iostream>
using namespace std;
int main()
{
    // finding the second max from the array 

    // first find the max from the array 
    int array[6]={56,78,23,45,67,98};
    int ans=56;
    for(int i=0;i<6;i++)
    {
        if (array[i]>ans)
        {
            ans=array[i];
        }
    }
    cout<<ans<<endl;

    // second maximun from the array 
    int second=56;
    for(int i=0;i<6;i++)
    {
        if (ans!=array[i])
        {
            if(array[i]>second)
            {
                second=array[i];
            }
        }
    }
    cout<<second<<endl;


    // This code can be replaced by 
    // if(array[i]>second)
    //         {
    //             second=array[i];
    //         }
    // ans=max(ans,array[i])



}