#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    system("clear");

    double num_A, num_B, num_C;

    printf("Please enter the value for \"a\":\n");
    scanf("%lf", &num_A);
    printf("Please enter the value for \"b\":\n");
    scanf("%lf", &num_B);
    printf("Please enter the value for \"c\":\n");
    scanf("%lf", &num_C);

    double radical = pow(num_B, 2) + (-4 * num_A * num_C);
    printf("\n~~ radical %f\n\n", radical);
    if (radical < 0.0)
    {
        // roots are complex
        // radical = radical * -1;
    }
    else
    {
        // roots are real
    };

    double numerator_1 = (-num_B) + sqrt(radical);
    double numerator_2 = (-num_B) - sqrt(radical);
    double zero_1_ptr = numerator_1 / (2 * num_A);
    double zero_2_ptr = numerator_2 / (2 * num_A);

    printf("The zeros are: %f and %f.\n", zero_1_ptr, zero_2_ptr);
};