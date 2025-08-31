#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int throws[100];
    int counts[6] = {0};
    int sum = 0;

    // loop for 100 throws
    for (int i = 0; i < 100; i++){
        int roll = (rand() % 6) + 1;

        throws[i] = roll;
        counts[roll - 1]++;
        sum += roll;
    }

    // print counts for 1-6
    for (int j = 0; j < 6; j++){
        printf("%d\n", counts[j]);
    }

    // print sum
    printf("%d\n", sum);

    // print average
    float avg = (float)sum / 100;
    printf("%.1f\n", avg);

    return 0;
}
