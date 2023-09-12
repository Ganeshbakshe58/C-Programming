// WAP to find greatest number in an array
#include<stdio.h>
void main(){
    int arr[10],i,n, greatnum;
    printf("Enter the size of Array : "); 
    scanf("%d",&n);
    printf("Enter elements into your array\n");
    for( i= 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
        }
        greatnum = arr[0];
        for (int i = 0; i<n ; i++){
            if((greatnum) < arr [i]){
                greatnum = arr[i] ;
        }
        }
        printf ("The Greatest Number is %d ",greatnum );
}