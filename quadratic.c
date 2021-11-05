#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int num_arg, char **args)
{
    double num_A, num_B, num_C;

    if (num_arg <= 1)
    {

        system("clear");
        printf("\n ~~ Quadratic Calculator ~~\n");
        printf("             ̲ ̲ ̲ ̲ ̲ ̲\n");
        printf("        ̲-̲b̲±̲√̲b̲̲²̲̲-̲4̲a̲c̲\n");
        printf("             2a\n\n");

        printf("Please enter the value for \"a\":\n");
        scanf("%lf", &num_A);
        printf("Please enter the value for \"b\":\n");
        scanf("%lf", &num_B);
        printf("Please enter the value for \"c\":\n");
        scanf("%lf", &num_C);
        printf("\n");
    }
    else
    {
        num_A = atof(args[1]);
        num_B = atof(args[2]);
        num_C = atof(args[3]);
    };
    double radical = pow(num_B, 2) + (-4 * num_A * num_C);

    if (radical < 0.0)
    {
        // roots are complex
        double real_part = (-num_B) / (2 * num_A);
        double imaginary_part = sqrt(radical * -1.0) / (2 * num_A);

        printf("%f+%fi %f-%fi\n", real_part, imaginary_part, real_part, imaginary_part);
    }
    else
    {
        // roots are real
        double numerator_1 = (-num_B) + sqrt(radical);
        double numerator_2 = (-num_B) - sqrt(radical);
        double zero_1_ptr = numerator_1 / (2 * num_A);
        double zero_2_ptr = numerator_2 / (2 * num_A);

        printf("%f %f\n", zero_1_ptr, zero_2_ptr);
    };
    return 0;
};
