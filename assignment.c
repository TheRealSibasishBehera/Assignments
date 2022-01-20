#include<stdio.h>
int main() {
    printf("Enter number of elements in array");
    int size=0;
    size=scanf("%d",&size);
    int arr[size];//intialisation of array
    for (int i = 0; i < size; i++)
    {
        arr[i]=scanf("%d",&arr[i]);
    }
    //making a temporary array for reference
    int temp1[size]=arr;
//asking user for left or rigth rotation 
    int choice=0;
    printf("Choose 1 for left rotation");
    printf("Choose 2 for right rotation");
    choice=scanf("%d",&choice);
    int d=0;
    printf("select no of elements by which rotaion is required");
    d=scanf("%d",&d);   
    if(choice==1)
    {
                        int temp[d];
                            for (int i = 0; i < d; i++)
                            {
                            temp[i]=scanf("%d",&temp[i]);
                            }
                    //now simply run the loop for size-d times to shift rest of the elements
                            for (int i = 0; i < size-d; i++)
                            {
                            arr[i]=temp[i+d];
                            }
                    //now simply run the loop for d times to update
                    int x=0;
                            for (int i = size-d; i < size; i++)
                            {
                            arr[i]=temp[x];
                            x++;
                            }
    }
     if(choice==2)
    {
int temp[d];
for (int i = size-1-d; i < size; i++)
{
    temp[i]=scanf("%d",&temp[i]);
}

            for (int i = d; i < size; i++)
            {
            arr[i]=temp[i-d];
            }
            //askjlv
            for (int i = 0; i < d; i++)
            {
            arr[d+i]=temp1[i];
            }
            for (int i = 0; i < d; i++)
            {
                arr[i]=temp[i];
            }
            
    }
    //printing new array
    for (int i = 0; i < size; i++)
    {
        printf("%d ",&arr[i])
    }
    
    return 0;
}