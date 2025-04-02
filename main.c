#include <iso646.h>
#include <stdio.h>

int main(void) {
    float quiz,mid_x,final_x,average;

    printf("enter quix score (out of 100)");
    scanf("%f",&quiz);

    printf("enter mid x (out of 100)");
    scanf("%f",&mid_x);

    printf("enter final x (out of 100)");
    scanf("%f",&final_x);

    average=(quiz+mid_x+final_x)/3;

    if(average>90)
        printf("\ngrade is A");

    if(average>=70 &&  average<90 )
        printf("\ngrade is B");

    if (average>=50 && average <70)
        printf("\ngrade is C");

    if (average <50)
        printf("\ngrade is f");



    return 0;
}