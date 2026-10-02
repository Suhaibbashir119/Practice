#include <stdio.h>
void main() {
    int n;

    printf("Enter the Size of an Array: ");
    scanf("%d",&n);

    int marks[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index %d : ",i);
        scanf("%d", &marks[i]);
    }

    printf("The array is : {");

    for(int i = 0; i < n; i++) {
        printf("%d , ",marks[i]);

    }
    printf("} \n");

    printf("------------------Sum of Array Elements or Marks---------------------------------\n");


    int sum = 0;

    for(int i =0;i < n ; i++){
        sum += marks[i];
    }

    printf("The sum of Elements of an Array is : %d\n", sum);


    printf("------------------Number of Elements in an Array---------------------------------\n");


    int count = 0;

    for(int i =0;i < n ; i++){
        count++;
    }
    printf("Total number of Elements in an Array is : %d\n", count);

    printf("------------------Average of Marks---------------------------------\n");


    float avg;

    avg = (float)sum / count;

    printf("Average of marks is : %.2f\n", avg);


    printf("------------------Largest Element---------------------------------\n");

    int max = marks[0];
    int indexMax = 0;

    for(int i = 1; i < n; i++){
        if(max<marks[i]){
            max = marks[i];
            indexMax = i;
        }
    }


    printf("The largest element is %d at index  %d.\n",max,indexMax);

    printf("------------------Smallest Element---------------------------------\n");


    int min = marks[0];
    int indexMin = 0;

    for(int i = 1; i < n; i++){
        if(min>marks[i]){
            min = marks[i];
            indexMin = i;
        }
    }
    printf("The Smallest element is %d at index  %d.\n",min,indexMin);

    printf("------------------Searching an Element from an array---------------------------------\n");

    int key;

    printf("Enter the element to find: ");
    scanf("%d",&key);

    int found = 0;

    for(int i=0;i<n;i++){
        if(key == marks[i]){
            printf("Element %d found at index %d.",key,i);
            found = 1;
        }

    }
    if(found == 0){
            printf("Element %d not found inside this array.",key);
        }

    }

