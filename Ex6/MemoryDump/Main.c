/******************************************************************************

             .

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[2] = { 333, 74645 };
    
    PrintHexBytes(&arr, sizeof(arr));
    
    PrintBits(&arr, sizeof(arr));

    return 0;
}
