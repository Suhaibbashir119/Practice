#include <stdio.h>
void main() {
    int n;
    printf("Enter the Size of an Array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        printf("Enter element at index %d",i);
        scanf("%d", &arr[i]);
    }

    printf("The array is : ");
    for(int i = 0; i < n-1; i++) {
        printf("%d , ",i);
        
    }
    
    
    

}