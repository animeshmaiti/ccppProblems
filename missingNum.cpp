#include <iostream>
using namespace std;

int main(){
    int miss[20];
    int arr[]={6,1,2,8,3,4,7,10};
    int min,max;
    min=max=arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (min>arr[i])
        min=arr[i];
        if (max<arr[i])
        max=arr[i];
    }
    for (int i = 0; i <= max; i++)
    {
        for (int j = min; j < max; j++)
        {
            if (j==arr[i])
            {
                break;
            }
            
        }
        
    }
    
    
    return 0;
}