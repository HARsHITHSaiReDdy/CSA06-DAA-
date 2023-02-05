#include <stdio.h>
int main(){
    int arr[]={1,3,5,4,2}, x, y, temp;       
    for(x = 0; x < 5 - 1; x++){       
        for(y = 0; y < 5 - x - 1; y++){          
            if(arr[y] > arr[y + 1]){               
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(x = 0; x < 5; x++){
        printf("%d  ", arr[x]);
    }
    return 0;
}
