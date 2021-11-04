#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("clear");
    printf("\n ~~ Quadratic Calculator ~~\n");
    printf("             ̲ ̲ ̲ ̲ ̲ ̲\n");
    printf("        ̲-̲b̲±̲√̲b̲̲²̲̲-̲4̲a̲c̲\n");
    printf("             2a\n\n");

    double num_A, num_B, num_C;

    printf("Please enter the value for \"a\":\n");
    scanf("%lf", &num_A);
    printf("Please enter the value for \"b\":\n");
    scanf("%lf", &num_B);
    printf("Please enter the value for \"c\":\n");
    scanf("%lf", &num_C);

    double radical = pow(num_B, 2) + (-4 * num_A * num_C);
    printf("\nUnder the radical: %f\n", radical);
    if (radical < 0.0)
    {
        // roots are complex
        printf("Roots are complex.\n");

        double real_part = (-num_B) / (2 * num_A);
        double imaginary_part = sqrt(radical * -1.0) / (2 * num_A);

        printf("The zeros are: %f+%fi and %f-%fi.\n", real_part, imaginary_part, real_part, imaginary_part);
    }
    else
    {
        // roots are real
        printf("Roots are real.\n");

        double numerator_1 = (-num_B) + sqrt(radical);
        double numerator_2 = (-num_B) - sqrt(radical);
        double zero_1_ptr = numerator_1 / (2 * num_A);
        double zero_2_ptr = numerator_2 / (2 * num_A);

        printf("The zeros are: %f and %f.\n", zero_1_ptr, zero_2_ptr);
    };
    return 0;
};
