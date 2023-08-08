// WAP to find out perimeter of the Square and Rectangle.
#include<stdio.h>
void main(){
    int sq_s, length, breath;
    printf("Enter Side of Square: "); scanf("%d", &sq_s);
    printf("Enter Lenght of Rectangle: "); scanf("%d", &length);
    printf("Enter Breath of Rectangle: "); scanf("%d", &breath);

    int perimeter_sq = 4*sq_s;
    printf("The Perimeter of Square of Side (%d) is %d ", sq_s, perimeter_sq);

    int perimeter_rect = 2*(length + breath);
    printf("The Perimeter of Rectange with Length (%d) and Breath (%d) is %d", length, breath, perimeter_rect);
}